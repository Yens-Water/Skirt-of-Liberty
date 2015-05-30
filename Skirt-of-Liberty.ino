#include <Adafruit_NeoPixel.h>
//Gemma Pin1
#define PIN 1  
Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, PIN, NEO_GRB + NEO_KHZ800);

//"F"   
uint8_t Line1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};    //10
uint8_t Line2[] = {0, 4};   //2
uint8_t Line3[] = {0, 4};   //2
uint8_t Line4[] = {0, 4};   //2
uint8_t Line5[] = { };   //0
//"R"
uint8_t Line6[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //10
uint8_t Line7[] = {0, 4, 5};//3
uint8_t Line8[] = {0, 4, 6, 7};//4
uint8_t Line9[] = {0, 1, 2, 3, 4, 8, 9};//7
uint8_t Line10[] = { };//0
//"E"
uint8_t Line11[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};//10
uint8_t Line12[] = {0, 4, 9};//3
uint8_t Line13[] = {0, 4, 9};//3
uint8_t Line14[] = {0, 4, 9};//3
uint8_t Line15[] = { };//0
//"E"
uint8_t Line16[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};//10
uint8_t Line17[] = {0, 4, 9};//3
uint8_t Line18[] = {0, 4, 9};//3
uint8_t Line19[] = {0, 4, 9};//3
uint8_t Line20[] = { };//0
//"D"
uint8_t Line21[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};//10
uint8_t Line22[] = {0, 9};//2
uint8_t Line23[] = {1, 2, 7, 8};//4
uint8_t Line24[] = {3, 4, 5, 6};//4
uint8_t Line25[] = { };//0
//"O"
uint8_t Line26[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //10
uint8_t Line27[] = {0, 9};//2
uint8_t Line28[] = {0, 9};//2
uint8_t Line29[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};//10
uint8_t Line30[] = { };//0
//"M"
uint8_t Line31[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};//10
uint8_t Line32[] = {2, 3};//2
uint8_t Line33[] = {3, 4, 5};//3
uint8_t Line34[] = {2, 3};//2
uint8_t Line35[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //10
uint8_t Line36[] = { };//0
uint8_t AllLine[] = {10, 2, 2, 0, 10, 3, 4, 7, 0, 10, 3, 3, 3, 0, 10, 3, 3, 3, 0, 10, 2, 2, 10, 0, 10, 2, 3, 2, 10, 0}; //ex: "Line1" has 10 numbers inside, so put 10 in AllLine at first. And keep continue..... 
const unsigned char * AllofLines[] = {Line1, Line2, Line3, Line4, Line5, Line6, Line7, Line8, Line9, Line10, Line11,Line12, Line13, Line14, Line15, Line16, Line17, Line18, Line19, Line20, Line21, Line22, Line23, Line24, Line25, Line26, Line27, Line28, Line29, Line30, Line31, Line32, Line33, Line34, Line35, Line36};

void setup() {
  strip.begin();
  strip.show();                
}

void loop() {
  ColorShowUp(strip.Color(50, random(0,50), random(0,50)), 300); //chang color and blink time
  ColorClean(strip.Color(0, 0, 0), 250);
}

void ColorShowUp(uint32_t color, uint16_t time) {
  for (uint16_t i = 0; i < 36; i++) {  // there's 36 lines in "AllofLines" 
    uint16_t x = AllLine[i];
    for (uint16_t j = 0; j < x; j++) {
      strip.setPixelColor(AllofLines[i][j], color);
    }
     strip.show();
      delay(time);
    ColorClean(strip.Color(0, 0, 0), 250);// clean up everytime 
  }

}
void ColorClean(uint32_t color, uint16_t time) {
  for (uint16_t i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, color);
  }
  strip.show();
  delay(time);
}



