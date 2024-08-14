/*
  Lighting up APA102-2020 2mm addressable LEDs
  By: Nathan Seidle
  SparkFun Electronics
  Date: August 14, 2024
  License: MIT. Please see LICENSE.md for more information.

  This example shows how to turn on four small APA102-2020 LEDs.
  
  Feel like supporting open source hardware?
  Buy a board from SparkFun!
  SparkFun CBI Light Pipe for SMD LEDs 5mm - Right Angle (COM-25893) https://www.sparkfun.com/products/25893
  SMD LED - RGB APA102-2020 (Pack of 10) (COM-14608) https://www.sparkfun.com/products/14608
*/

#include <FastLED.h>  //Click here to get the library: http://librarymanager/All#FastLED_multi-platform by Daniel Garcia

#define DATA_PIN 9
#define CLOCK_PIN 8

#define NUM_LEDS 4
CRGB leds[NUM_LEDS];

void setup()
{
  FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, BGR>(leds, NUM_LEDS);  // BGR ordering is typical

  leds[0] = CRGB::Red;
  leds[1] = CRGB::Green;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Purple;
  FastLED.show();
}

void loop()
{
  delay(500);
}
