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

  sparki.print("Accel Y: "); 
  sparki.println(y);
  
  sparki.print("Accel Z: "); 
  sparki.println(z);
  
  sparki.updateLCD(); // display all of the information written to the screen
  delay(100);
  
}
