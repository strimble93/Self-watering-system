#include "MyWiFi.h"

// This file is used for connecting an arduino to wifi
void connectWiFi(const char* SSID, const char* PASS)    {
    if(WiFi.status() == WL_CONNECTED)   {
        // If the wifi is already connectd do nothing just let user know.
        Serial.println("Already connected");
    } else  {
        // If unconnected, try and connect
        // Inform user of entering this command.
        Serial.println("Attempting to connect to WiFi");

        // Set up the WiFi connection
        WiFi.begin(SSID, PASS);

        // While not connected say connecting
        while(WiFi.status() != WL_CONNECTED)    {
            delay(500);
            Serial.println("Connecting to WiFi...");
        }

        // Connected to WiFi
        Serial.println("Connected to the WiFi network");
        Serial.println(WiFi.localIP());
    }
}

void disconnectWifi()   {
    WiFi.disconnect();
}