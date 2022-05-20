#define SECRET

const char ssid[] = "enter the wifi ssid here";
const char pass[] = "enter the wifi password here";

#define HOSTNAME "esp_test"

const char *MQTT_HOST = "mqtt.iris.nitk.ac.in";
const int MQTT_PORT = 8883;
const char *MQTT_USER = "vidhyug"; // leave blank if no credentials used
const char *MQTT_PASS = "2tnM2Rw_NCrVN@fq"; // leave blank if no credentials used

const char* local_root_ca =
	    "-----BEGIN CERTIFICATE-----\n" \
   "MIIEXzCCA0egAwIBAgIUBfYQwGZTKPkQ/jb08rJVB/HyqX4wDQYJKoZIhvcNAQEL\n" \
"BQAwgb4xCzAJBgNVBAYTAklOMRIwEAYDVQQIDAlLYXJuYXRha2ExEjAQBgNVBAcM\n" \
"CVN1cmF0aGthbDEzMDEGA1UECgwqTmF0aW9uYWwgSW5zdGl0dXRlIG9mIFRlY2hu\n" \
"b2xvZ3kgS2FybmF0YWthMRIwEAYDVQQLDAlJUklTIE5JVEsxGzAZBgNVBAMMEmNh\n" \ 
"LmlyaXMubml0ay5hYy5pbjEhMB8GCSqGSIb3DQEJARYSY2FAaXJpcy5uaXRrLmFj\n" \
"LmluMB4XDTIwMDEyNjA1NTE1N1oXDTMwMDEyMzA1NTE1N1owgb4xCzAJBgNVBAYT\n" \
"AklOMRIwEAYDVQQIDAlLYXJuYXRha2ExEjAQBgNVBAcMCVN1cmF0aGthbDEzMDEG\n" \
"A1UECgwqTmF0aW9uYWwgSW5zdGl0dXRlIG9mIFRlY2hub2xvZ3kgS2FybmF0YWth\n" \
"MRIwEAYDVQQLDAlJUklTIE5JVEsxGzAZBgNVBAMMEmNhLmlyaXMubml0ay5hYy5p\n" \
"bjEhMB8GCSqGSIb3DQEJARYSY2FAaXJpcy5uaXRrLmFjLmluMIIBIjANBgkqhkiG\n" \
"9w0BAQEFAAOCAQ8AMIIBCgKCAQEAz9rjHnZ3IYoCp/oYnWd9vWViDBrnV1y1HukU\n" \
"YxcxJPBJ8qg+wTke3gkRRoqRm2wHxhqjME+NkHtQOoVeAdgmT/bVSI7Iv0/3PXcu\n" \
"jpmu4pNj4q4R/vs2gntDVKWU0dKWazJU12rNWghidGi+LpgyWIYN0ILiwKx7lpBd\n" \
"ibUhoZa0yYaDU4VwfGb3R07Clxg0YPzpfQf5IGvTW/ukn0m7yZWnFmOSKcvdUwOx\n" \
"3NYoEemxxy8QVPJklMmoN6xEl7jSgrT+1FrGnRFebOOjaXIaPcshvvAVDSHF4ylj\n" \
"yBtmSkLf/4Wokx27PKzYsSYv/1Kc4x1HKMr4T6vMYXTMMG11QQIDAQABo1MwUTAd\n" \
"BgNVHQ4EFgQUxwQQlvEE6jXx5sdGpOAIgjvMSq8wHwYDVR0jBBgwFoAUxwQQlvEE\n" \
"6jXx5sdGpOAIgjvMSq8wDwYDVR0TAQH/BAUwAwEB/zANBgkqhkiG9w0BAQsFAAOC\n" \
"AQEAnHneZqHy5cnoGE/ckph3qXyiL+wnAdOJyMhLNZQYf12csy7sJDdus7NApr1K\n" \
"Ktf44/O34+57QOVCIIyycdNzBv64JuR2kFVJrc4ycVc4v8JT+6RNxN49OTd2wp8K\n" \
"jQoBpv2V8BHLpjwznY4CnBYvsTc3BLOav4sykETJOz/ju03aGEbpH81cnzyxRDhV\n" \
"Hx2F0tHRX3t0EtW9nh3cwUil+gsc2Jlq3KuJcVEil6jTfk1vzU2+5WEHJXilyGsZ\n" \
"sM24WdCXHZ7egOd3bNoAyzjItw4OS2274EcFlIB/7tBVnFF2ZstTe79feFH8dGW+\n" \
"IhaBAYGESMXuWQN/IL9IZ3EDkg==\n" \
    "-----END CERTIFICATE-----";
