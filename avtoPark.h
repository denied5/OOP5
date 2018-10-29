#pragma once
#include "car.h"
#include <ctime>
class avtoPark :
	public car
{
private:
	car* kievAvtoPark;
	int numOfCar;

public:
	car & operator [] (int num)
	{
		if (num < numOfCar)
		{
			return kievAvtoPark[num];
		}
	}
	void showSrats();
	avtoPark(int num);
	avtoPark();
	~avtoPark();
};



inline void avtoPark::showSrats()
{
}

inline avtoPark::avtoPark(int num)
{
	numOfCar = num;
	kievAvtoPark = new car[num];
	srand(time(0));
	for (size_t i = 0; i < num; i++)
	{
		
		
		kievAvtoPark[i].setCarNumber(1 + rand() % 500);
		if (1 + rand() % 500 < 250)
		{
			kievAvtoPark[i].setSteeringWheels('l');
		}
		else
		{
			kievAvtoPark[i].setSteeringWheels('r');
		}
		
		kievAvtoPark[i].setNumOfSitis(1 + rand() % 500);

		
		kievAvtoPark[i].setSerialOfBudy(1 + rand() % 500);
		kievAvtoPark[i].body::setSerialOfMetal(1 + rand() % 500);

		kievAvtoPark[i].setSerialOfEngin(1 + rand() % 500);
		kievAvtoPark[i].engin::setSerialOfMetal(1 + rand() % 500);
	}
}

avtoPark::avtoPark()
{
}


avtoPark::~avtoPark()
{
}
