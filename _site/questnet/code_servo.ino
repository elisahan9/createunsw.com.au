#include "Servo.h" //Include the Servo library

Servo myServo; //Instantiate Servo Object

void setup() {
  pinMode(A1, INPUT); //Setup Analog Pin 1 as an input
  myServo.attach(9); //Pin 9 will be used to control the servo

}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrVal = analogRead(A1); //Input from the LDR
  int serVal = map(ldrVal, 500, 1023, 0, 180); // Maps (500 - 1023 -> 0 - 180)
  myServo.write(serVal); //Give the servo in value of degrees
  delay(20); //Delay
}
