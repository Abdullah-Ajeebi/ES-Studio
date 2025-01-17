#ifndef GLOBALS_H
#define GLOBALS_H

#include "Defs.h"
class Globals {
public:
	Globals();
	QWORD ignitionInstance;
	QWORD ignitionFunctionInstance;
	QWORD speedInstance;
	QWORD engineInstance;
	QWORD transmissionInstance;

	QWORD engineOld;

	bool quickShift;
	double quickShiftTimer;
	bool autoBlip;
	double autoBlipTimer;
	bool isRotary;
	bool shown;
	bool customIgnitionNeedsUpdate;
	bool twoStepActive;
};

#endif