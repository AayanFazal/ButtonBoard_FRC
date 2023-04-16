# ButtonBoard_FRC
Custom operator button board using Teensy 4.1 microcontroller 

Code that turns the Teensy 4.1 microcontroller into an HID compatible device with FRC Driverstation by Aayan Fazal

** Hardware **

All ground wires from buttons go to ground pin on Teensy board
All hot wires go to corresponding digital pin on Teensy board
(Ex. Button 1 goes to digital pin 0, Button 2 - digital pin 1 etc..)
**Software **

Uses the arduino ide
Software should already be installed on controllers as of 4/16/2023

**Reflashing the Teensy **

Download TeensyJoystick.ino from this repo
Open the code into the arduino IDE (File>Open>TeensyJoystick)
Head to library manager and make sure the Joystick Library by Giueppe Martnini is installed
From "Tools > USB Type" menu make sure "keyboard +. mouse + joystick" is selected
Click the upload button to reflash/program the teensy controller

**Interfacting w/ Driverstation **
Plug in the controller
Under the usb tab in driverstation the controller should show up as "Keyboard/Mouse/Joystick"
Since the controller is being recognized as an external joystick, you can create a button_board object from the Joystick class in WPILIB
