#pragma once
#include "body.h"
#include "engin.h"
class car :
	public body, public engin {

private:
	int carNumber;
	int numOfSits;
	char steeringWheel;

public:
	car();
	car(int i)
	{
		carNumber = i;
		numOfSits = 4;
		steeringWheel = 'r';
	}
	~car();

	int getCarNumber();
	void setCarNumber(int k);
	int getNumOfSits();
	void setNumOfSitis(int k);
	void setSteeringWheels(char k);
	char getSteeringWheels();
};



car::car()
{
}


car::~car()
{
}




int car::getCarNumber()
{
	return carNumber;
}


void car::setCarNumber(int k)
{
	carNumber = k;
}


int car::getNumOfSits()
{

	return numOfSits;
}


void car::setNumOfSitis(int k)
{
	numOfSits = k;
}


void car::setSteeringWheels(char k)
{
	steeringWheel = k;
}


char car::getSteeringWheels()
{

	return steeringWheel;
}
