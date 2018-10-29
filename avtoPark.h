#pragma once
#include "car.h"
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
	for (size_t i = 0; i < num; i++)
	{
		
		
		kievAvtoPark[num].setCarNumber(12);
		kievAvtoPark[num].setSteeringWheels('l');
		kievAvtoPark[num].setNumOfSitis(12);

		
		kievAvtoPark[num].setSerialOfBudy(12);
		kievAvtoPark[num].getBody().serialOfMetal = 5;

		kievAvtoPark[num].setSerialOfEngin(4);
		kievAvtoPark[num].getEngin().setSerialOfMetal(2);
		
		
		
	}
}

avtoPark::avtoPark()
{
}


avtoPark::~avtoPark()
{
}
