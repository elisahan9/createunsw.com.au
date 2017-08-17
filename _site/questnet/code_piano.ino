/*
 This sketch was originally written by SparkFun Electronics for Simon Says game in their Dev. Kit,
 with lots of help from the Arduino community.
 Modified to be a 4 note piano (plays G5, A5, B5 and C6)
 This code is completely free for any use.
 Visit http://www.arduino.cc to learn about the Arduino.
 */

/*************************************************
* Public Constants
*************************************************/
#define NOTE_G5 784 //green
#define NOTE_A5 880 //yellow
#define NOTE_B5 988 //red
#define NOTE_C6 1047 //blue

#define CHOICE_OFF      0 //Used to control LEDs
#define CHOICE_NONE     0 //Used to check buttons
#define CHOICE_RED  (1 << 0)
#define CHOICE_GREEN    (1 << 1)
#define CHOICE_BLUE (1 << 2)
#define CHOICE_YELLOW   (1 << 3)

//LED constants
#define LED_RED     8
#define LED_GREEN   4
#define LED_BLUE    9
#define LED_YELLOW  5

// Button pin definitions
#define BUTTON_RED    10
#define BUTTON_GREEN  2
#define BUTTON_BLUE   11
#define BUTTON_YELLOW 3

// Buzzer pin definitions
#define BUZZER1  6
#define BUZZER2  7

void setup()
{
  //Setup hardware inputs/outputs. These pins are defined in the hardware_versions header file

  //Enable pull ups on inputs
  pinMode(BUTTON_RED, INPUT_PULLUP);
  pinMode(BUTTON_GREEN, INPUT_PULLUP);
  pinMode(BUTTON_BLUE, INPUT_PULLUP);
  pinMode(BUTTON_YELLOW, INPUT_PULLUP);

  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);

  pinMode(BUZZER1, OUTPUT);
  pinMode(BUZZER2, OUTPUT);
  setLEDs(CHOICE_OFF); // Turn off LEDs
}

void loop()
{
    toner(checkButton(), 150);
}



//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//The following functions control the hardware

// Lights a given LEDs
// Pass in a byte that is made up from CHOICE_RED, CHOICE_YELLOW, etc
void setLEDs(byte leds)
{
  if ((leds & CHOICE_RED) != 0)
    digitalWrite(LED_RED, HIGH);
  else
    digitalWrite(LED_RED, LOW);

  if ((leds & CHOICE_GREEN) != 0)
    digitalWrite(LED_GREEN, HIGH);
  else
    digitalWrite(LED_GREEN, LOW);

  if ((leds & CHOICE_BLUE) != 0)
    digitalWrite(LED_BLUE, HIGH);
  else
    digitalWrite(LED_BLUE, LOW);

  if ((leds & CHOICE_YELLOW) != 0)
    digitalWrite(LED_YELLOW, HIGH);
  else
    digitalWrite(LED_YELLOW, LOW);
}

// Returns a '1' bit in the position corresponding to CHOICE_RED, CHOICE_GREEN, etc.
byte checkButton(void)
{
  if (digitalRead(BUTTON_RED) == 0) return(CHOICE_RED); 
  else if (digitalRead(BUTTON_GREEN) == 0) return(CHOICE_GREEN); 
  else if (digitalRead(BUTTON_BLUE) == 0) return(CHOICE_BLUE); 
  else if (digitalRead(BUTTON_YELLOW) == 0) return(CHOICE_YELLOW);

  return(CHOICE_NONE); // If no button is pressed, return none
}

// Light an LED and play tone
void toner(byte which, int buzz_length_ms)
{
  setLEDs(which); //Turn on a given LED

  //Play the sound associated with the given LED
  switch(which) 
  {
  case CHOICE_RED:
    tone(BUZZER2, NOTE_B5, buzz_length_ms); 
    break;
  case CHOICE_GREEN:
    tone(BUZZER2, NOTE_G5, buzz_length_ms);
    break;
  case CHOICE_BLUE:
    tone(BUZZER2, NOTE_C6, buzz_length_ms);
    break;
  case CHOICE_YELLOW:
    tone(BUZZER2, NOTE_A5, buzz_length_ms);
    break;
  }

  setLEDs(CHOICE_OFF); // Turn off all LEDs
}

