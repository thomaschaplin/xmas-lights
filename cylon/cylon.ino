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
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Green;
    FastLED.show();
    leds[i] = CRGB::Black;
    delay(30);
  }
  for (int i = NUM_LEDS - 1; i >= 0; i--) {
    leds[i] = CRGB::Blue;
    FastLED.show();
    leds[i] = CRGB::Black;
    delay(30);
  }
}
