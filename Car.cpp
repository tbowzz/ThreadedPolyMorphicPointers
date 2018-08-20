#include "Car.h"

Car::Car() : topSpeed(50.0), color("black")
{
}

void Car::reportStats()
{
	printf("This is a generic car.\n");
}

void Car::goFast()
{
	printf("Vroooom: Now going %lf mph!", topSpeed);
}

// void Car::run()
// {
// 	while (mRunThread)
// 	{
// 		accelerate();
// 		std::this_thread::sleep_for( std::chrono::seconds(1) );
// 		turnLeft();
// 		std::this_thread::sleep_for( std::chrono::seconds(1) );
// 		turnRight();
// 		std::this_thread::sleep_for( std::chrono::seconds(1) );
// 	}
// 	stop();
// }
