int pos = 0;    

void setup() {
  servo1.attach(2);
   servo2.attach(3);
   servo3.attach(4);
   servo4.attach(5);
 
}
void loop() {
  for (int angle = 0; angle <= 180; angle++) {
   servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
    delay(10);
  }

  for (int angle = 180; angle >= 0; angle--) {
    servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
    delay(10);
  }

  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  delay(2000);
}
  