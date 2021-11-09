/************************ Adafruit IO Config *******************************/

#define IO_USERNAME "apertuz"
#define IO_KEY "aio_GDIe90Sn6eh5TWSvCfvnifx1G611"

/******************************* WIFI **************************************/

#define WIFI_SSID "iPhone de Rodrigo"
#define WIFI_PASS "123456789"

#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
