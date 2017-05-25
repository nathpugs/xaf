#include <Adafruit_NeoPixel.h>

#define PIN 6

char val;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(144, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  strip.setBrightness(32);
}

void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}

void loop() {
  if (Serial.available()) 
     { // If data is available to read,
       val = Serial.read(); // read it and store it in val
     }
     if (val == '1') 
     { // If 1 was received
        strip.setPixelColor(128, 255, 0, 0);
        strip.show();
      
         
     } if (val == '0') {
        strip.setPixelColor(128, 0, 0, 0);
        strip.show();
     }
     
     delay(10); // Wait 10 milliseconds for next reading
}

