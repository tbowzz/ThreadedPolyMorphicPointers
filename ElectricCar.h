#pragma once

#include "Car.h"

class ElectricCar : public Car
{
public:
	ElectricCar(){}

private:

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
		printf("Electric: hmmmmmmmmm\n");
	}

	void turnLeft()
	{
		printf("Electric: rleeeeeeeeeeeee\n");
	}

	void turnRight()
	{
		printf("Electric: reeeeeeeeeeeee\n");
	}

	void stop()
	{
		printf("Electric: hrrrrrrrrrr\n");
	}

};