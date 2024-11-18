#include <Arduino.h>
#include <Pinlayout.h>

Pinlayout Newpin1;


void setup() {

Newpin1.pinM();

Serial.begin(9600);

}
void loop() {

    Newpin1.pinout();

    Serial.print("This is words");


}

