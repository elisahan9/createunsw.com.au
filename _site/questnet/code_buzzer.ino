void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT); //Setup Analog Pin 1 as input
  pinMode(8, OUTPUT); //Setup Digital Pin 8 as Output
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldrVal = analogRead(A1); //Read input from LDR
  int toneVal = map(ldrVal, 0, 1023, 0, 8000); //Map tone (0 - 1023 --> 0 - 8000)
  tone(8, toneVal/2); //Output tone to the buzzer
}
