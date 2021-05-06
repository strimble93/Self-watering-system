# Self-watering-system
Author: Scott Trimble

# Concept
Create a system that monitors the moisture of a plants soil. The system will have a water tank that, when the plant needs water, will activate a pump and water the plant.
The water tank will be located below the plant pot so that any excess water drains back into the water tank.
The water level of the tank will also be monitored. When the tank is low the controller will send a notification to a phone. The time and frequency of these notifications will be adjustable.

I will be using a DOIT ESP32 DEVKIT V1 as this gives me wifi capability and I have one spare.

For the software side I will be using visual studio code with the extension [PlatformIO](https://platformio.org/).

#Getting started with PlatformIO
As I have never used PlatformIO before it took a while to get used to setting up projects etc.
[Here](https://www.youtube.com/watch?v=JmvMvIphMnY&ab_channel=DroneBotWorkshop) is a guide on how to get started.

# Related Project
After some research I have found a [project by Raphael Baron](https://github.com/rbaron/w-parasite) that could be of use.
This is a custom ESP32 project that monitors soil moisture and transmits that data via wifi.

# Starting point
The first step of getting this project to work is setting up the ADC. Creating a voltage divider with a potentiometer and creating a threshold that will activate an LED.
The project will develop into using a capactive soil moisture sensors on the ADC and a BJT or MOSFET instead of the LED to switch a small pump.
