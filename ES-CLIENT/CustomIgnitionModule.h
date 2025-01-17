#ifndef CUSTOMIGNITIONMODULE_H
#define CUSTOMIGNITIONMODULE_H

#include "engineUpdate.h"
#include "engineEdit.h"
#include "SimFunctions.h"
#include "Globals.h"

struct Post {
	double angle = 0;
	int target = 0;
	bool enabled = false;
};

class CustomIgnitionModule {
public:
	CustomIgnitionModule(EngineUpdate* update, EngineEdit* edit, SimFunctions* functions, Globals* g);
	__int64 ignitionProcess(__int64 instance, double dt);
	void SetParameters();
protected:
	int m_postCount;
	double m_revLimit;
	double m_limiterDuration;
	double m_twoStepLimiterDuration;
	double m_speedLimiterDuration;
	Post* m_posts;
	bool* m_ignitionEvents;
	double m_revLimitTimer;
	double m_twoStepRevLimitTimer;
	double m_speedLimiterTimer;
	double m_lastCrankshaftAngle;
	QWORD m_crankShaft;
};

#endif