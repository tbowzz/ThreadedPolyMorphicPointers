#pragma once

#include <string>
#include <memory>
#include "Car.h"
#include "RallyCar.h"
#include "ElectricCar.h"

class CarFactory
{
public:
	CarFactory(std::string type)
	{
		if (!strcasecmp(type.c_str(), "Electric"))
		{
			printf("Creating electric car.\n");
			std::shared_ptr<Car> car(new ElectricCar);
			mCar = car;
		}
		else if (!strcasecmp(type.c_str(), "Rally"))
		{
			printf("Creating rally car.\n");
			std::shared_ptr<Car> car(new RallyCar);
			mCar = car;
		}
		else
		{
			printf("Creating basic car.\n");
			std::shared_ptr<Car> car(new Car);
			mCar = car;
		}
	}

	std::shared_ptr<Car> self()
	{
		return mCar;
	}

private:
	std::shared_ptr<Car> mCar;
};