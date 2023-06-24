#include <Arduino.h>
#include <Keypad.h>

const uint8_t ROWS = 4;
const uint8_t COLS = 4;

char keys[ROWS][COLS] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
} ;

uint8_t colPins[COLS] = {4,0,2,15};
uint8_t rowsPins[ROWS] = {26,27,14,12};

Keypad keypad = Keypad(makeKeymap(keys), rowsPins, colPins, ROWS,COLS);

void setup() {
  Serial.begin(115200);
}
void loop(){

  char key = keypad.getKey();
  if (key){
    Serial.println(key);
  }
}