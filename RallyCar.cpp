#include "RallyCar.h"

RallyCar::RallyCar()
{
	topSpeed = 155.0;
	color = "blue";
}

void RallyCar::reportStats()
{
	printf("This is a rally car! Top Speed: %lf, Color: %s\n", topSpeed, color.c_str());
}

void RallyCar::goFast()
{
	printf("Drifting to %lf!\n", topSpeed);
}
