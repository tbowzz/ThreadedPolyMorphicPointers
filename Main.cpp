#include <cstdio>

#include "CarFactory.h"
#include "Car.h"
#include <thread>

int main(int argc, char **argv)
{
	CarFactory rally("Rally");
	rally.self()->start();

	CarFactory electric("Electric");
	electric.self()->start();

	std::this_thread::sleep_for( std::chrono::seconds(5) );

	electric.self()->stopThread();

	while(true);

	return 0;
}