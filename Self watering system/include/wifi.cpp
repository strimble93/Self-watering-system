#include <Arduino.h>
#include <WiFi.h>

// This file is used for connecting an arduino to wifi
void connectWiFi()    {
    // Inform user of entering this command.
    Serial.println("Attempting to connect to WiFi");

    // Set up the WiFi connection
    WiFi.begin(WIFI_SSID, WIFI_PASS);
    
    // While not connected say connecting
    while(WiFi.status() != WL_CONNECTED)    {
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