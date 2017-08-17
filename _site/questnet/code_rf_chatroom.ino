#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"

RF24 radio(9,10);
const uint64_t pipes[2] = { 0xF0F0F0F0E1LL, 0xF0F0F0F0D2LL };
unsigned long time;
char text[32];

void setup(){
  Serial.begin(57600);
  radio.begin();
  radio.setRetries(15,15);
  radio.openWritingPipe(pipes[1]);
  radio.openReadingPipe(1,pipes[0]);
  radio.setChannel(65);
  radio.startListening();
}

int i;

void loop(){
  if(radio.available()){
    while(!radio.read(text,32)){}
    for(i=0;i<strlen(text);i++){
      Serial.print(text[i]);
    }
  }
  while(Serial.available()){
    radio.stopListening();
    i = 0;
    while(Serial.available()&&i<30){
      text[i] = Serial.read();
      i++;
      delay(1);
    }
    if(Serial.available()){
      text[i]='\0';
    } else {
      text[i] = '\n';
      text[i+1] = '\0';
    }
    for(i=0;i<strlen(text);i++){
      Serial.print(text[i]);
    }
    radio.write(text,sizeof(text));
    radio.startListening();
    delay(20);
  }
}
