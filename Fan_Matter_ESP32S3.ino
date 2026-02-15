// Fan_Matter_ESP32S3.ino

#include <MatterFan.h>
#include <MatterDimmableLight.h>

// Create Matter Fan and Light instances
MatterFan myFan;
MatterDimmableLight myLight;

void setup() {
    // Initialize Matter protocol
    Matter.begin();
    // Setup Fan
    myFan.begin();
    // Setup Light
    myLight.begin();
}

void loop() {
    // Handle Matter events
    Matter.loop();
}