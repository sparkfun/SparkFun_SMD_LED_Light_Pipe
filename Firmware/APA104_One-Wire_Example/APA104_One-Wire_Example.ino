/*
  Controlling a few one-pin APA104 Addressable LEDs
  By: Nathan Seidle
  SparkFun Electronics
  Date: December 29th, 2023
  License: MIT. Please see LICENSE.md for more information.

  This example shows how to control 3 RGBs chained together.

  SMD LED - Addressable RGB APA-104-1010 (Pack of 20) (COM-25269): https://www.sparkfun.com/products/25269

  Hardware Connections:
  VCC on the LED can be 3.3V or 5V
  GND on the LED should connect to GND on the microcontroller.
  DI on the LED should connect to an output of your microcontroller. For 
  this example, we use an ESP32 which is capable of driving WS2812/APA106 type LEDs from
  nearly any pin. Your microcontroller may have restrictions.
*/

#include <FastLED.h> //Click here to get the library: http://librarymanager/All#FastLED_multi-platform by Daniel Garcia

#define LED_PIN     8
#define COLOR_ORDER RGB
#define CHIPSET     APA104
#define NUM_LEDS    3

int brightness = 25; //0 to 255. 25 is plenty

CRGB leds[NUM_LEDS];

void setup()
{
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);

  FastLED.setBrightness(brightness);

  leds[0] = CRGB::Red;
  leds[1] = CRGB::Green;
  leds[2] = CRGB::Blue;
  FastLED.show();
}

void loop()
{
  delay(2000);
}
