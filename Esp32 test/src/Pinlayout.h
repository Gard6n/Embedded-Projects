#include <Arduino.h>

class Pinlayout{


public:
    int _pin1 = 13;
    int _pinN = 1;

    void pinM(){
    for (int i = 0; i < _pinN; i++){
        pinMode(_pin1,OUTPUT);
        }
    }

    void pinout(){
        digitalWrite(_pin1,HIGH);
    }

};