#pragma once
#include "car.h"
#include <ctime>
#include <iostream>
using namespace std;
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
	void Stats();
	void showSrats();
	avtoPark(int num);
	avtoPark();
	~avtoPark();
};



inline void avtoPark::Stats()
{
	int sum = 0;
	for (int i = 0; i < numOfCar; i++)
	{
		sum+= kievAvtoPark[i].getBody().getSerialOfMetal();
	}

	cout <<"Number of car:" << numOfCar<<endl;
	cout << "The moust popular metal is:";
	float ind = sum / numOfCar;
	if (ind < 100)
	{
		cout << "Zink" << endl;
	}
	else if (ind < 250)
	{
		cout << "Latun" << endl;
	}
	else if (ind < 300)
	{
		cout << "Aurum" << endl;
	}
	else if (ind < 500)
	{
		cout << "carbon" << endl;
	}

}

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
		kievAvtoPark[i].setSerialOfMetal(12);
		

		kievAvtoPark[i].setSerialOfEngin(1 + rand() % 500);
		
	}
}

avtoPark::avtoPark()
{
}


avtoPark::~avtoPark()
{
}
