#include "FastLED.h"

#define NUM_LEDS 50
#define DATA_PIN 6
#define CHIPSET WS2812B

#define BRIGHTNESS 10

CRGB leds[NUM_LEDS];

void setup() {
  delay(3000);
  FastLED.addLeds<CHIPSET, DATA_PIN>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
}

void loop() {
  leds[0] = CRGB::White; FastLED.show(); delay(1000);
  leds[0] = CRGB::Black; FastLED.show(); delay(1000);
}
