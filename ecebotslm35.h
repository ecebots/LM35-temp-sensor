#ifndef ecebotslm35_h
#define ecebotslm35_h

#include "Arduino.h"

class lm35
{
  public:
    lm35(int pin);
    float temp();
  private:
    int _pin;
};

#endif