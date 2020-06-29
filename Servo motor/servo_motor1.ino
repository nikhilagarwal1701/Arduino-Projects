#include <Servo.h>

int pos = 0;

Servo servo;

void setup()
{
  servo.attach(9);

}

void loop()
{
  for (pos = 0; pos <= 180; pos += 90) {
    servo.write(pos);    
    delay(1000);
  }
  for (pos = 180; pos >= 0; pos -= 90) {
    servo.write(pos);
    delay(1000);
  }
}