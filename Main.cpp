#include <cstdio>

#include "CarFactory.h"
#include "Car.h"
#include <thread>

int main(int argc, char **argv)
{
	CarFactory rally("Rally");
	rally.self()->start();

	// CarFactory electric("Electric");
	std::shared_ptr<Car> electric(new ElectricCar);
	electric->start();

	std::this_thread::sleep_for( std::chrono::seconds(5) );

	electric->stopThread();

	std::this_thread::sleep_for( std::chrono::seconds(5) );

	rally.self()->stopThread();

	rally.self()->~Car();

	return 0;
}