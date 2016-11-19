#include <Sparki.h>

 
void setup() {
  // put your setup code here, to run once:


}

void loop() {
  // put your main code here, to run repeatedly:
 sparki.clearLCD(); // wipe the screen
  
  float x  = sparki.accelX();   // measure the accelerometer x-axis
  float y  = sparki.accelY();   // measure the accelerometer y-axis
  float z  = sparki.accelZ();   // measure the accelerometer z-axis

  // write the measurements to the screen
  sparki.print("Accel X: "); 
  sparki.println(x);
  if (x > 1 && y < 1 && z < -8) 
    sparki.beep(1000);
 else {sparki.print("Accel Y: "); 
  sparki.println(y);
 if (x < 1 && y > 1 && z < -8)
    sparki.beep(100);

  sparki.print("Accel Z: "); 
  sparki.println(z);
 if (x < 1 && y < 1 && z > -8)
    sparki.beep(800);
 else sparki.beep(30);
 delay(100);
 }

 delay(100);

    if (x > 1 && 1>y>1) 
    sparki.beep(1000);
 else sparki.beep(0);
 delay(100);
 
;
 
  sparki.updateLCD(); // display all of the information written to the screen
  delay(100);
  
}
