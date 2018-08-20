cmake_minimum_required(VERSION 3.9)
project(Utility)

set(CMAKE_CXX_STANDARD 11)

add_executable(run
		Car.h
		Car.cpp
		CarFactory.h
		ElectricCar.h
		RallyCar.h
		RallyCar.cpp
        Thread.h
        Thread.cpp
        Main.cpp)
