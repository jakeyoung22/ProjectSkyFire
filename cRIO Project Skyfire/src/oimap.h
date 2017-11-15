/*
 * oimap.h
 *
 *  Created on: Sep 28, 2017
 *      Author: jakey
 */

#ifndef OIMAP_H
#define OIMAP_H


#include "xb360map.h"


const static UINT32 PAD_DRIVER   = 1;
const static UINT32 PAD_OPERATOR = 2;

const static float  AXIS_FILTER = 0.04;

const static UINT32 DRV_AXIS_X = XB360_AXIS_LEFT_X;
const static UINT32 DRV_AXIS_Y = XB360_AXIS_LEFT_Y;

const static UINT32 DRV_AXIS_X2 = XB360_AXIS_RIGHT_X;
const static UINT32 DRV_AXIS_Y2 = XB360_AXIS_RIGHT_Y;

const static UINT32 DRV_AXIS_Z  = XB360_AXIS_TRIGGER_L;

const static UINT32 OPR_AXIS_X = XB360_AXIS_LEFT_X;
const static UINT32 OPR_AXIS_Y = XB360_AXIS_LEFT_Y;

const static UINT32 OPR_AXIS_X2 = XB360_AXIS_RIGHT_X;
const static UINT32 OPR_AXIS_Y2 = XB360_AXIS_RIGHT_Y;

const static UINT32 OPR_AXIS_Z  = XB360_AXIS_TRIGGER_L;

//Driver buttons:
const static UINT32 DRV_GEAR_SHIFT				= XB360_BUMPER_RIGHT;
const static UINT32 DRV_BLING_TOGGLE			= XB360_START;
const static UINT32 DRV_MODE_CHANGE				= XB360_BACK;
const static UINT32 DRV_START_SHOOTER			= XB360_Y;
const static UINT32 DRV_INCREASE_SPEED			= XB360_B;
const static UINT32 DRV_DECREASE_SPEED			= XB360_X;
const static UINT32 DRV_STOP_SHOOTER			= XB360_A;
const static UINT32 DRV_FEED_SHOOTER			= XB360_BUMPER_LEFT;

//Operator buttons:
//const static UINT32 OPR_LOADER_LOADING_EXTEND	= XB360_BUMPER_LEFT;











#endif /* OIMAP_H_ */
