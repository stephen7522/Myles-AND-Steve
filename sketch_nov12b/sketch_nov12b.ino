#include <Sparki.h>
void setup() {

}

void loop() {
 
 int lineLeft   = sparki.lineLeft();   // measure the left IR sensor
 int lineCenter = sparki.lineCenter(); // measure the center IR sensor
 int lineRight  = sparki.lineRight();  // measure the right IR sensor
 int edgeLeft = sparki.edgeLeft();
 int edgeRight = sparki.edgeRight();
 sparki.clearLCD(); // wipe the screen
 
  sparki.print("Line Left: "); // show left line sensor on screen
  sparki.println(lineLeft);
 
  sparki.print("Line Center: "); // show center line sensor on screen
  sparki.println(lineCenter);
 
  sparki.print("Line Right: "); // show right line sensor on screen
  sparki.println(lineRight);
 
  sparki.updateLCD(); // display all of the information written to the screen
 
  delay(100); // wait 0.1 seconds
 if (lineLeft < 800) 
  { 
    sparki.moveRight();
  }
 if ((lineCenter < 1000) && (lineCenter > 800))
 {
  sparki.moveForward();
 }
  if ((edgeLeft < 600) && (edgeRight > 800))
  {
    sparki.moveLeft();
  }
}


