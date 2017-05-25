#include <Adafruit_NeoPixel.h>

#define PIN 6

char val;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(144, PIN, NEO_GRB + NEO_KHZ800);

int currentValue = 0;
int values[] = {0,0};

void setup() {
  Serial.begin(9600);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  strip.setBrightness(32);
}

void loop() {
  if (Serial.available()) 
     { // If data is available to read,
       int incomingValue = Serial.read(); // read it and store it
       
       values[currentValue] = incomingValue;
        
       currentValue++;
       if(currentValue > 1){
         currentValue=0;
       }
       
       strip.setPixelColor(values[0], values[1], values[0], values[1]);
       strip.show();
     }
  
}

