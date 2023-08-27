// stole this code from my old project
// https://github.com/jdc-cunningham/noob-robotics/blob/master/taildragger-ultrasound-mapping/code/motion_1_ultrasonic_od_all_sensors_1__basic-od-logic/motion_1_ultrasonic_od_all_sensors_1__basic-od-logic.ino

#include <Servo.h>

// servos named from top view, front facing the top
Servo topFrontLeft;
Servo topFrontRight;
Servo topBackLeft;
Servo topBackRight;
Servo bottomFrontLeft;
Servo bottomFrontRight;
Servo bottomBackLeft;
Servo bottomBackRight;

// wtf are these variables, my own code from almost 3 years ago
// int seLeFoPos = 85;
// int seRiFoPos = 97; // these determine the speed, higher value from midpoint eg. 90 the faster it rotates
// int seLeBaPos = 95;
// int seRiBaPos = 84;
// int seLeStPos = 90;
// int seRiStPos = 90;

// bool isMovingForward = false;
// bool isMovingBackwards = false;
// bool isTurningLeft = false;
// bool isTurningRight = false;

// bool loggingEnabled = true;
String activeDirection = "";

// int motionIncrementer = 0; // cap this
// int maxMotionVal = 2;

// int motionDelay = 250;

void setupServos()
{
  topFrontLeft.attach(5);
  topFrontRight.attach(6);
  topBackLeft.attach(7);
  topBackRight.attach(8);
  bottomFrontLeft.attach(9);
  bottomFrontRight.attach(10);
  bottomBackLeft.attach(11);
  bottomBackRight.attach(12);
  topFrontLeft.write(90);
  topFrontLeft.write(90);
  topFrontRight.write(90);
  topBackLeft.write(90);
  topBackRight.write(90);
  bottomFrontLeft.write(90);
  bottomFrontRight.write(90);
  bottomBackLeft.write(90);
  bottomBackRight.write(90);
}

// // motions
// void moveForward() {
//   servoLeft.write(seLeFoPos);
//   servoRight.write(seRiFoPos);

//   if (loggingEnabled)
//   {
//     Serial.print("Forward");
//     Serial.println();
//   }
// }

// void turnLeft() {
//   servoLeft.write(seLeBaPos);
//   servoRight.write(seRiFoPos);

//   if (loggingEnabled)
//   {
//     Serial.print("Left");
//     Serial.println();
//   }
// }

// void turnRight() {
//   servoLeft.write(seLeFoPos);
//   servoRight.write(seRiBaPos);

//   if (loggingEnabled)
//   {
//     Serial.print("Right");
//     Serial.println();
//   }
// }

// void moveBackward() {
//   servoLeft.write(seLeBaPos);
//   servoRight.write(seRiBaPos);

//   if (loggingEnabled)
//   {
//     Serial.print("Backward");
//     Serial.println();
//   }
// }

// void stopMoving()
// {
//   servoLeft.write(seLeStPos);
//   servoRight.write(seRiStPos);
// }