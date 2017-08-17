#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"

char text[32];
RF24 radio(9,10);
const uint64_t pipes[2] = { 0xF0F0F0F0E1LL, 0xF0F0F0F0D2LL };
unsigned long time;

void setup(){
  Serial.begin(57600);
  radio.begin(); 
  radio.openWritingPipe(pipes[1]);
  radio.openReadingPipe(1,pipes[0]);
  radio.setChannel(65);
  radio.startListening();
}

void loop(){
  int i;
  while(!radio.available()){}
  while(!radio.read(text,32)){}
  for(i=0;i<strlen(text);i++){
    Serial.print(text[i]);
  }
}
