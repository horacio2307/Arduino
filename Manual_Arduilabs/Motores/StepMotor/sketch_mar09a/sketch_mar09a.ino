#include <Stepper.h>


#define pasos 64

Stepper motor(pasos, 9, 10, 11, 12);


void setup() {
  // set the speed of the motor to 30 RPMs
  motor.setSpeed(30);
  
}

void loop() {

    motor.step(1);

}
