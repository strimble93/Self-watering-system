#ifndef _WIFI_H_
#define _WIFI_H_

#include <WiFi.h>
#include <string>

void connectWiFi(const char* SSID, const char* PASS);

void disconnecWiFi();

#endif