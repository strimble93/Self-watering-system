// This file is used for connecting an arduino to wifi
#include "wifi.h"

void connectWiFi(SSID, PASS)    {
    // Inform user of entering this command.
    Serial.println("Attempting to connect to WiFi");

    // Set up the WiFi connection
    WiFi.Begin(SSID, PASS);
    
    // While not connected say connecting
    while(WiFi.Status() != WL_CONNECTED)    {
        delay(500);
        Serial.println("Connecting to WiFi...");
    }

    // Connected to WiFi
    Serial.println("Connected to the WiFi network");
    Serial.println(WiFi.localIP());
}

void disconnectWifi()   {
    WiFi.disconnect();
}