#pragma once
#include <arduino.h>

class Ultrasonic{

public:

long _duration;
long _distance;

  void trig_start(int _pin1){
  digitalWrite(_pin1, LOW);
  delayMicroseconds(2);
  digitalWrite(_pin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(_pin1, LOW);

}

  void Results(float dur) {
    _distance  = (dur*.0343)/2;
    if ((_distance == 0)) {
      Serial.println("No distance");
      delay(100);
    }
    else {
      Serial.print("Distance is ");
      Serial.println(_distance);
      delay(100);
    }


  }
};