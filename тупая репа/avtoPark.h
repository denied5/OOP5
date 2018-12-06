
#pragma once


#include "car.h"
#include <ctime>
#include <iostream>
#include <fstream>

using namespace std;

class avtoPark :
	public car
{
private:
	car * kievAvtoPark;
	

public:
	int numOfCar;
	car & operator [] (int num)
	{
		return kievAvtoPark[num];
	}
	template <typename T, typename T2>
	inline void Stats(T numofCarGet, T2 arreyOfCars);
	void showSrats();
	int getNumOfCars()
	{
		return numOfCar;
	}
	car* GetAvtoPark()
	{
		return kievAvtoPark;
	}
	avtoPark(int num);
	avtoPark();

	void createFile()
	{
		fstream f;
		f.open("D:\\game\\bin.dat", fstream::out | fstream::binary | fstream::trunc);
		int* a = new int[numOfCar];
		for (size_t i = 0; i < numOfCar; i++)
		{
			int n = kievAvtoPark[i].getCarNumber();
			f.put((char)n);
		}
		
		f.close();
		
		f.open("D:\\game\\dec.txt", fstream::out | fstream::trunc);
		for (size_t i = 0; i < numOfCar; i++)
		{
			f.put((char)a[i]);
			
		}
		f.close();
	}

	friend ostream& operator <<(ostream& os, avtoPark& t)
	{
		int k = t.numOfCar;
		for (size_t i = 0; i < k; i++)
		{
			os <<"Serial of Budy: "<< t.kievAvtoPark[i].getSerialOfBudy() <<"\n Serial of engin: "<< t.kievAvtoPark[i].getSerialOfEngin()<<"\n Num of Sits: " << t.kievAvtoPark[i].getNumOfSits() << endl;
		}
		
		return os;
	};
	~avtoPark();
};





template <typename T, typename T2>
inline void avtoPark::Stats(T numofCarGet, T2 arreyOfCars)
{
	T sum = 0;
	for (T i = 0; i < numOfCar; i++)
	{
		sum += arreyOfCars.getBody().getSerialOfMetal();
	}

	cout << "Number of car:" << numOfCar << endl;
	cout << "The moust popular metal is:";
	T ind = sum / numOfCar;
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
