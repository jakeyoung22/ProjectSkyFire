#ifndef XB360MAP_H_
#define XB360MAP_H_ 1
/*
 * This file creates lexical constants for the buttons and AXISes on the
 * XBOX 360 Game pad that we use.
 */

// Buttons, including when you push in a stick
#define XB360_A 1
#define XB360_B 2
#define XB360_X 3
#define XB360_Y 4
#define XB360_BUMPER_LEFT  5
#define XB360_BUMPER_RIGHT 6
#define XB360_BACK 7
#define XB360_START 8
#define XB360_LEFT_STICK 9
#define XB360_RIGHT_STICK 10

// Axises, Left Stick, Right stick and the Trigger virtual Axis
#define XB360_AXIS_LEFT_X	0
#define XB360_AXIS_LEFT_Y   1
#define XB360_AXIS_RIGHT_X  4
#define XB360_AXIS_RIGHT_Y  5
#define XB360_AXIS_TRIGGER_L  2
#define XB360_AXIS_TRIGGER_R  3

//	Note that the Triggers can be treated as a button by some fancy tricks

#endif
/* From http://www.chiefdelphi.com/forums/showthread.php?t=89510 
 * 

 X Axis: Left Thumbstick Left-Right
 X Axis Rotation: Right Thumbstick Left-Right
 Y Axis: Left Thumb Stick (Needs to be negated or else up-down controlls are inverted)
 Y Axis Rotation: Right Thumb Stick (Needs to be negated or else up-down controlls are inverted)
 Z Axis (>0): Left Trigger
 Z Axis (<0): Right Trigger

 1: A Button
 2: B Button
 3: X Button
 4: Y Button
 5: Left Bumper
 6: Right Bumper
 7: Stop/Back Button
 8: Start Button
 9: Left Thumbstick Button
 10: Right Thumbstick Button

 And this (post 1 on same thread);

 The buttons on the controller follow this mapping

 1: A
 2: B
 3: X
 4: Y
 5: Left Bumper
 6: Right Bumper
 7: Back
 8: Start
 9: Left Joystick
 10: Right Joystick

 The axis on the controller follow this mapping
 (all output is between -1 and 1)
 •1: Left Stick X Axis
 -Left:Negative ; Right: Positive
 •2: Left Stick Y Axis
 -Up: Negative ; Down: Positive
 •3: Triggers
 -Left: Positive ; Right: Negative
 •4: Right Stick X Axis
 -Left: Negative ; Right: Positive
 •5: Right Stick Y Axis
 -Up: Negative ; Down: Positive
 •6: Directional Pad (Not recommended, buggy)


 */
