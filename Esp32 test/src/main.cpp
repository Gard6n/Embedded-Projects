#include <Arduino.h>
#include <Pinlayout.h>
#include <Ulrasonic.h>

Layout Trig, Echo;
Ultrasonic Trig2, Echo2;

void setup() {
    //Pins are assigned
    Trig._pin1 = 16;
    Echo._pin1 = 17;

    Serial.begin(9600);

    // Pins are placed in Output/Input
    Trig.pin_output();
    Echo.pin_input();
}
void loop() {

    Trig2.trig_start(Trig._pin1);
    Echo2._duration = pulseIn(Echo._pin1, HIGH);
    Trig2.Results(Echo2._duration);
}

