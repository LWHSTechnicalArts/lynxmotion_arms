//robot arm test
//program as board: duemilanove

#include <Servo.h>

Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo11;// create servo object to control a servo
Servo myservo12;// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo2.attach(2);  // attaches the servo on pin 2 to the servo object
  myservo3.attach(3);  // attaches the servo on pin 3 to the servo object
  myservo4.attach(4);  // attaches the servo on pin 4 to the servo object
  myservo11.attach(11);  // attaches the servo on pin 11 to the servo object
  myservo12.attach(12);  // attaches the servo on pin 12 to the servo object
}

void loop() {
  for (pos = 80; pos <= 110; pos += 1) { // goes from 80 degrees to 110 degrees
    // in steps of 1 degree
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    myservo3.write(pos);
    myservo4.write(pos);
    myservo11.write(pos);
    myservo12.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 110; pos >= 80; pos -= 1) { // goes from 110 degrees to 80 degrees
    myservo2.write(pos);                // tell servo to go to position in variable 'pos'
    myservo3.write(pos);
    myservo4.write(pos);
    myservo11.write(pos); 
    myservo12.write(pos);             // tell servo to go to position in variable 'pos'
    delay(15);                        // waits 15ms for the servo to reach the position
  }
}
