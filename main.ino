#include <WiFi.h>
#include "src/dependencies/WiFiClientSecure/WiFiClientSecure.h" //using older WiFiClientSecure
#include <PubSubClient.h>
#include <String.h>
#include "secrets.h"
//************************************************************************************//
const char MQTT_SUB_TOPIC[] = "vidhyug/chargetime";  
const char MQTT_PUB_TOPIC[] = "vidhyug/status";  
const char* relay_status = 0;

const int red_led = 27;
const int green_led = 32;
const int blue_led = 25;

const int relay = 23;

unsigned long charge_time;

String message;

WiFiClientSecure net;
PubSubClient client(net);

//************************************************************************************//
void mqtt_connect()
{
  while (!client.connected()) 
  {
    if (client.connect(HOSTNAME, MQTT_USER, MQTT_PASS)) 
    {
      Serial.println("Connected to IRIS Server");
      client.subscribe(MQTT_SUB_TOPIC);
    }
    else 
    {
      Serial.print(client.state());
      Serial.println("try again in 5 seconds");
      /* Wait 5 seconds before retrying */
      delay(5000);
    }
  }

}
//************************************************************************************//
unsigned long   ReceivedCallback(char* topic, byte* payload, unsigned int length) 
{
 
   payload[length] = '\0'; 
   unsigned long charge_time = atoi((char *)payload);
   
  // Serial.println(charge_time);
  
  if (strcmp(topic, "vidhyug/chargetime") == 0) 
  {
     int button = 1;
     test(button, charge_time);
  }
}

//************************************************************************************//

unsigned long  test(unsigned int button, unsigned long charge_time )
{ 
  
 unsigned long samaya = millis()/1000;
 charge_time = charge_time*60;

 
 if(button == 1)
 
 {
    
    while(((millis()/1000) - samaya <= charge_time))
    
    {
      Serial.println((millis()/1000)-samaya);
      digitalWrite(relay, HIGH);
      relay_status = "1";
      client.publish(MQTT_PUB_TOPIC, relay_status);
    
    }
    
   digitalWrite(relay, LOW);   
   relay_status = "0";
   client.publish(MQTT_PUB_TOPIC, relay_status);
 
 }

  else
 
    {
      digitalWrite(red_led, HIGH);
    }
  
}

//************************************************************************************//

void setup()
{
  Serial.begin(115200);
  WiFi.setHostname(HOSTNAME);
  WiFi.mode(WIFI_AP_STA);
  WiFi.begin(ssid, pass);
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(1000);
  }

    //Trigger a LED here.

 
  net.setCACert(local_root_ca);
  client.setServer(MQTT_HOST, MQTT_PORT);
  client.setCallback(ReceivedCallback);
  mqtt_connect();

  pinMode(relay, OUTPUT);
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);

  digitalWrite(relay, LOW);
}

//************************************************************************************//

void loop()
{
  
  if (WiFi.status() != WL_CONNECTED)
  {
    digitalWrite(red_led, HIGH);
    while (WiFi.waitForConnectResult() != WL_CONNECTED)
    {
      WiFi.begin(ssid, pass);
      delay(10);
    }
    Serial.println("Connected to network");
  }
  else
  {
    if (!client.connected())
    {
      mqtt_connect();
    }
    else
    {
      client.loop();
    }

  }
}

//************************************************************************************//
