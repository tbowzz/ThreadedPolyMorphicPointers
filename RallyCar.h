#pragma once

#include "Car.h"

class RallyCar : public Car
{
public:
	RallyCar();

	void reportStats();
	void goFast();
	void special();

private:
	void drift();

	void run()
	{
		while (mRunThread)
		{
			accelerate();
			std::this_thread::sleep_for( std::chrono::seconds(1) );
			turnLeft();
			std::this_thread::sleep_for( std::chrono::seconds(1) );
			turnRight();
			std::this_thread::sleep_for( std::chrono::seconds(1) );
		}
		stop();
	}

	void accelerate()
	{
		printf("Rally: brap brap brap\n");
	}

	void turnLeft()
	{
		printf("Rally: skrrrrllllll\n");
	}

	void turnRight()
	{
		printf("Rally: skrrrr\n");
	}

	void stop()
	{
		printf("Rally: mmrrrrrrrrrrr\n");
	}

};