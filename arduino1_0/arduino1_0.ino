#include <Adafruit_NeoPixel.h>

#define PIN 6

char val;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(144, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(9200);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  strip.setBrightness(32);
}

void loop() {
  if (Serial.available()) 
     { // If data is available to read,
       val = Serial.read(); // read it and store it in val
     }
       if (val == '1') 
       { // If 1 was received
          strip.setPixelColor(132, 255, 0, 0);
          strip.show();
           
       } if (val != '1') {
          strip.setPixelColor(132, 0, 0, 0);
          strip.show();
       }
       
       if (val == '2') {
          strip.setPixelColor(133, 255, 0, 0);
          strip.show();
       }

       if (val != '2') {
          strip.setPixelColor(133, 0, 0, 0);
          strip.show();
       }
           
       if (val == '3') {
          strip.setPixelColor(134, 255, 0, 0);
          strip.show();
       }

       if (val != '3') {
          strip.setPixelColor(134, 0, 0, 0);
          strip.show();
       }

        if (val == '4') {
          strip.setPixelColor(135, 255, 0, 0);
          strip.show();
       }

       if (val != '4') {
          strip.setPixelColor(135, 0, 0, 0);
          strip.show();
       }
        if (val == '5') 
       { // If 1 was received
          strip.setPixelColor(136, 255, 0, 0);
          strip.show();
           
       } if (val != '5') {
          strip.setPixelColor(136, 0, 0, 0);
          strip.show();
       }
       
       if (val == '6') {
          strip.setPixelColor(137, 255, 0, 0);
          strip.show();
       }

       if (val != '6') {
          strip.setPixelColor(137, 0, 0, 0);
          strip.show();
       }
           
       if (val == '7') {
          strip.setPixelColor(138, 255, 0, 0);
          strip.show();
       }

       if (val != '7') {
          strip.setPixelColor(138, 0, 0, 0);
          strip.show();
       }

        if (val == '8') {
          strip.setPixelColor(139, 255, 0, 0);
          strip.show();
       }

       if (val != '8') {
          strip.setPixelColor(139, 0, 0, 0);
          strip.show();
       }
       if (val == '9') 
       { // If 1 was received
          strip.setPixelColor(140, 255, 0, 0);
          strip.show();
           
       } if (val != '9') {
          strip.setPixelColor(140, 0, 0, 0);
          strip.show();
       }
       
  
}

