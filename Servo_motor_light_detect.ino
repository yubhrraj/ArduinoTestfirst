#include <Servo.h>  
 
// Pins
const int servo_pin = 9;
const int light_pin = A0;
 
Servo servo;
 
void setup() {
 
  // Initialize servo
  servo.attach(servo_pin);
}
 
void loop() {
 
  // Read light value
  int val = analogRead(light_pin);
 
  // Map to servo position
  val = map(val, 0, 1023, 0, 180);
  servo.write(val);
 
  delay(10);
}