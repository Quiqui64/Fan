// Fan_ESP32S3.ino

#include <WiFi.h>
#include <IRremote.h>

// Define your Wi-Fi credentials
const char* ssid = "Your_SSID";
const char* password = "Your_PASSWORD";

// Define IR signal arrays - replace with actual signals
unsigned int irSignal1[] = {9000,4500,560,1690};  // Example IR signal
unsigned int irSignal2[] = {9000,4500,560,1690};  // Example IR signal

IRsend irsend;

void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);

    // Wait for WiFi connection
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("Connected to WiFi");

    irsend.begin();
}

void loop() {
    // Implement the logic for your fan control here
    controlFan();
}

void controlFan() {
    // Example code to send an IR signal
    irsend.sendRaw(irSignal1, sizeof(irSignal1) / sizeof(irSignal1[0]), 38);
    delay(2000);
}
