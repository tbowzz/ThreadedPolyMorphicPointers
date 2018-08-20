#pragma once

#include <cstdio>
#include <string>
#include "Thread.h"

class Car : public Thread
{
public:
	Car();
	~Car() {}
	
	virtual void reportStats();
	virtual void goFast();
	// void run();


protected:
	
	virtual void accelerate() {}
	virtual void turnLeft() {}
	virtual void turnRight() {}
	virtual void stop() {}

	double topSpeed;
	std::string color;
	
};