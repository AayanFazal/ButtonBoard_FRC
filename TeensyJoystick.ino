/**
  @author Aayan Fazal 
  @date 4/16/2023
   Teensy becomes a USB joystick
  from the "Tools > USB Type" menu select keyboard +. mouse + joystick 

   Ground from button goes to ground on teensy 
   Power from button goes to digital pin on teensy
    
**/

#include <Joystick.h>

void setup() {
  /**
  Configure pins on Teensy 
  @param pinMode(digitalpin,mode)
  INPUT_PULLUP - built in resisistor (input pin will read a high state when the button is not pressed) 
  **/

  // Top row of buttons
  pinMode(0, INPUT_PULLUP);  //button 1
  pinMode(1, INPUT_PULLUP);  //button 2
  pinMode(2, INPUT_PULLUP);  //button 3
  pinMode(3, INPUT_PULLUP);  //button 4

  //Second row of buttons
  pinMode(4, INPUT_PULLUP);  //button 4
  pinMode(5, INPUT_PULLUP);  //button 5
  pinMode(6, INPUT_PULLUP);  //button 6
  pinMode(7, INPUT_PULLUP);  //button 7

  //Third row of buttons
  pinMode(8, INPUT_PULLUP);   //button 8
  pinMode(9, INPUT_PULLUP);   //button 9
  pinMode(10, INPUT_PULLUP);  //button 10
  pinMode(11, INPUT_PULLUP);  //button 11

  //Fourth row of buttons
  pinMode(12, INPUT_PULLUP);  //button 12
  pinMode(13, INPUT_PULLUP);  //button 13
  pinMode(14, INPUT_PULLUP);  //button 14
  pinMode(15, INPUT_PULLUP);  //button 15

  //last row
  pinMode(16, INPUT_PULLUP);  //button 16
  pinMode(17, INPUT_PULLUP);  //button 17

  //Toggle switches
  pinMode(18, INPUT_PULLUP);  //button 18
  pinMode(19, INPUT_PULLUP);  //button 19
}

void loop() {
  //Read digital inputs and set the buttons
  // digitalRead(pinNumber) 
  //LOW voltage ,  digitalRead(1) == HIGH voltage

  //Buttons 1-18
  Joystick.button(1, !digitalRead(0));
  Joystick.button(2, !digitalRead(1));
  Joystick.button(3, !digitalRead(2));
  Joystick.button(4, !digitalRead(3));

  Joystick.button(5, !digitalRead(4));
  Joystick.button(6, !digitalRead(5));
  Joystick.button(7, !digitalRead(6));
  Joystick.button(8, !digitalRead(7));

  Joystick.button(9, !digitalRead(8));
  Joystick.button(10, !digitalRead(9));
  Joystick.button(11, !digitalRead(10));
  Joystick.button(12, !digitalRead(11));

  Joystick.button(13, !digitalRead(12));
  Joystick.button(14, !digitalRead(13));
  Joystick.button(15,!digitalRead(14));
  Joystick.button(16, !digitalRead(15));

  Joystick.button(17, !digitalRead(16));
  Joystick.button(18, !digitalRead(17));

  //Toggle switches
  Joystick.button(19, !digitalRead(18));
  Joystick.button(20, !digitalRead(19));


  // a brief delay, so this runs 20 times per second
  delay(10);
}