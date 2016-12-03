#include <Sparki.h>
 
void setup() {
  // put your setup code here, to run once:

 sparki.drawCircleFilled(60, 30, 2);
}

void loop() {
  // put your main code here, to run repeatedly:
 sparki.clearLCD(); // wipe the screen
  
  float x  = sparki.accelX();   // measure the accelerometer x-axis
  float y  = sparki.accelY();   // measure the accelerometer y-axis
  float z  = sparki.accelZ();   // measure the accelerometer z-axis

  // write the measurements to the screen


int a = sparki.accelX ();
int b = sparki.accelY ();


 sparki.drawCircleFilled(60+5*a, 30+5*b, 2);

  Serial.println("Accel X: "); 
 Serial.println(x);
  Serial.println("Accel Y: "); 
 Serial.println(y);
  Serial.println("Accel Z: "); 
 Serial.println(z);


 
  sparki.updateLCD(); // display all of the information written to the screen
  delay(10);
  
}
