#include "Arduino.h"
#include "ecebotslm35.h"

lm35::lm35(int pin)
{
  _pin = pin;
}

float lm35::temp()
{
	float tmp;
  tmp = (5.0 * analogRead(_pin) * 100.0) / 1024;
  return tmp;
}