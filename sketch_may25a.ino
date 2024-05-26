#include <SoftwareSerial.h>

// Define software serial pins for HC-05
SoftwareSerial BTSerial(D10, D9); // RX, TX (adjust these pins as needed)

// Pin definitions for motor driver
const int leftFrontMotorPin1 = D1;  // GPIO5
const int leftFrontMotorPin2 = D2;  // GPIO4
const int leftBackMotorPin3 = D3;   // GPIO0
const int leftBackMotorPin4 = D4;   // GPIO2
const int rightFrontMotorPin1 = D7; // GPIO13
const int rightFrontMotorPin2 = D8; // GPIO15
const int rightBackMotorPin3 = D5;  // GPIO14
const int rightBackMotorPin4 = D6;  // GPIO12

void setup() {
  // Set the motor pins as outputs
  pinMode(leftFrontMotorPin1, OUTPUT);
  pinMode(leftFrontMotorPin2, OUTPUT);
  pinMode(leftBackMotorPin3, OUTPUT);
  pinMode(leftBackMotorPin4, OUTPUT);
  pinMode(rightFrontMotorPin1, OUTPUT);
  pinMode(rightFrontMotorPin2, OUTPUT);
  pinMode(rightBackMotorPin3, OUTPUT);
  pinMode(rightBackMotorPin4, OUTPUT);

  // Start serial communication with the Bluetooth module
  BTSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if (BTSerial.available()) {
    char command = BTSerial.read();
    Serial.println(command);

    switch (command) {
      case 'F': // Move forward
        // Implement motor control logic for moving forward
        digitalWrite(leftFrontMotorPin1, HIGH);
        digitalWrite(leftFrontMotorPin2, LOW);
        digitalWrite(leftBackMotorPin3, HIGH);
        digitalWrite(leftBackMotorPin4, LOW);
        digitalWrite(rightFrontMotorPin1, HIGH);
        digitalWrite(rightFrontMotorPin2, LOW);
        digitalWrite(rightBackMotorPin3, HIGH);
        digitalWrite(rightBackMotorPin4, LOW);
        break;
      case 'B': // Move backward
        // Implement motor control logic for moving backward
        digitalWrite(leftFrontMotorPin1, LOW);
        digitalWrite(leftFrontMotorPin2, HIGH);
        digitalWrite(leftBackMotorPin3, LOW);
        digitalWrite(leftBackMotorPin4, HIGH);
        digitalWrite(rightFrontMotorPin1, LOW);
        digitalWrite(rightFrontMotorPin2, HIGH);
        digitalWrite(rightBackMotorPin3, LOW);
        digitalWrite(rightBackMotorPin4, HIGH);
        break;
      case 'L': // Turn left
        // Implement motor control logic for turning left
        digitalWrite(leftFrontMotorPin1, LOW);
        digitalWrite(leftFrontMotorPin2, HIGH);
        digitalWrite(leftBackMotorPin3, HIGH);
        digitalWrite(leftBackMotorPin4, LOW);
        digitalWrite(rightFrontMotorPin1, HIGH);
        digitalWrite(rightFrontMotorPin2, LOW);
        digitalWrite(rightBackMotorPin3, LOW);
        digitalWrite(rightBackMotorPin4, HIGH);
        break;
      case 'R': // Turn right
        // Implement motor control logic for turning right
        digitalWrite(leftFrontMotorPin1, HIGH);
        digitalWrite(leftFrontMotorPin2, LOW);
        digitalWrite(leftBackMotorPin3, LOW);
        digitalWrite(leftBackMotorPin4, HIGH);
        digitalWrite(rightFrontMotorPin1, LOW);
        digitalWrite(rightFrontMotorPin2, HIGH);
        digitalWrite(rightBackMotorPin3, HIGH);
        digitalWrite(rightBackMotorPin4, LOW);
        break;
      case 'S': // Stop
        // Implement motor control logic to stop all motors
        digitalWrite(leftFrontMotorPin1, LOW);
        digitalWrite(leftFrontMotorPin2, LOW);
        digitalWrite(leftBackMotorPin3, LOW);
        digitalWrite(leftBackMotorPin4, LOW);
        digitalWrite(rightFrontMotorPin1, LOW);
        digitalWrite(rightFrontMotorPin2, LOW);
        digitalWrite(rightBackMotorPin3, LOW);
        digitalWrite(rightBackMotorPin4, LOW);
        break;
    }
  }
}
