#include <Sparki.h>

void setup() {
    Serial1.begin(9600);

  sparki.clearLCD();

 
// /------^-----
// |            |
// | 69  70  71 |
// | 68  64  67 |
// |  7  21   9 |
// | 22  25  13 |
// | 12  24  94 |
// |  8  28  90 |
// | 66  82  74 |
// ____________/

}

void loop() {
//sparki.moveForward();
  int code = sparki.readIR();
  int cm = sparki.ping(); // measures the distance with Sparki's eyes

    if(code != -1){
    sparki.print("Received code: ");
    sparki.println(code);
  }
switch(code){

  // Movement buttons
  case 70: sparki.moveForward(); break;
  case 21: sparki.moveBackward(); break;
  case 67: 
  case 71: sparki.moveRight(); break;
  case 69:
  case 68: sparki.moveLeft(); break;
  case 64: sparki.moveStop(); 
           sparki.gripperStop();
           break;

  // Gripper Buttons
  case 9:  sparki.gripperOpen(); break;
  case 7:  sparki.gripperClose(); break;

  // buzzer
  case 74: sparki.beep();
  Serial1.print("Distance = ");
  Serial1.print(sparki.ping());
  Serial1.println(" cm");

  delay(300);  
    if(cm != -1) // make sure its not too close or too far
    { 
        if(cm < 10) // if the distance measured is less than 10 centimeters
        {
            sparki.beep(1000); // beep!
        }
    }
 
    sparki.updateLCD();
    delay(100); // wait 0.1 seconds (100 milliseconds)
  break;

  // Servo Buttons
  case 90: sparki.servo(SERVO_RIGHT); break;
  case 28: sparki.servo(SERVO_CENTER); break;
  case 8: sparki.servo(SERVO_LEFT); break;

  // RGB LED
  case 25: sparki.RGB(RGB_OFF); break;
  case 12: sparki.RGB(RGB_RED); break;
  case 24: sparki.RGB(RGB_GREEN); break;
  case 94: sparki.RGB(RGB_BLUE); break;

  default:
    break;
  }

  sparki.updateLCD();
  
}


