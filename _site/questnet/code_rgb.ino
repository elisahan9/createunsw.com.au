// Button pin definitions
#define BUTTON_RED    2
#define BUTTON_GREEN  3
#define BUTTON_BLUE   4
#define BUTTON_YELLOW 5

//RGB LED pin definitions
#define RED 9
#define GREEN 10
#define BLUE 11

bool buttonPressed = 0;

void setup() {
  pinMode(BUTTON_RED, INPUT_PULLUP);
  pinMode(BUTTON_GREEN, INPUT_PULLUP);
  pinMode(BUTTON_BLUE, INPUT_PULLUP);
  pinMode(BUTTON_YELLOW, INPUT_PULLUP);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT); 
  digitalWrite(RED, HIGH);   
  digitalWrite(GREEN, HIGH);  
  digitalWrite(BLUE, HIGH);  
}

void loop() {
  if (digitalRead(BUTTON_RED) == 0) { 
    colour(255,0,0);
  } else if (digitalRead(BUTTON_GREEN) == 0) { 
    colour(0,255,0);
  } else if (digitalRead(BUTTON_BLUE) == 0) { 
    colour(0,0,255);
  } else if (digitalRead(BUTTON_YELLOW) == 0) {
    buttonPressed = 0;
    while (buttonPressed == 0) {
      byte i=0;
      while ((i < 255)&&(buttonPressed == 0)) {
        colour(255-i,i,0);
        buttonPressed = ((!digitalRead(BUTTON_GREEN))||(!digitalRead(BUTTON_RED))||(!digitalRead(BUTTON_BLUE)));
        delay(20);
        i++;
      }
      i = 0;
      while ((i < 255)&&(buttonPressed == 0)) {
            colour(0,255-i,i);
        buttonPressed = ((!digitalRead(BUTTON_GREEN))||(!digitalRead(BUTTON_RED))||(!digitalRead(BUTTON_BLUE)));
        delay(20);        
        i++;
      }
      i = 0;
      while ((i < 255)&&(buttonPressed == 0)) {
        colour(i,0,255-i);
        buttonPressed = ((!digitalRead(BUTTON_GREEN))||(!digitalRead(BUTTON_RED))||(!digitalRead(BUTTON_BLUE)));
        delay(20);
        i++;
      }
    }
    colour(255,255,255);
  }
}

void colour(byte r, byte g, byte b) {
    analogWrite(RED, 255-r);
    analogWrite(GREEN, 255-g);
    analogWrite(BLUE, 255-b);
}

