#pragma once
#include <Arduino.h>

class Layout{


public:
    int _pin1;


    void pin_output() const {
        pinMode(_pin1,OUTPUT);
    }

   void pin_input() const {
        pinMode(_pin1,INPUT);
    }

};