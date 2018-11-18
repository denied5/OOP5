#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include "avtoPark.h"
#include "tamplateClass.h"
using namespace std;


void compareTypes(const int size) {
	char *arrChar = new char[size];
	clock_t startTime;
	clock_t endTime;
	clock_t duration;
	string arrString;
	arrString.at(1);

	for (int i = 0; i < size; i++)
	{
		arrChar[i] = 'a' + rand() % 26;
	}
	arrString = arrChar;

	startTime = clock();
	sort(arrChar, arrChar + strlen(arrChar));
	endTime = clock();

	duration = double(endTime - startTime) / CLOCKS_PER_SEC * 1000;
	cout << "\nSorted:\ntime(char *): " << duration << " ms" << endl;


	startTime = clock();
	sort(arrString.begin(), arrString.end());
	endTime = clock();

	duration = double(endTime - startTime) / CLOCKS_PER_SEC * 1000;
	cout << "time(string): " << duration << " ms" << endl;
}



int main()
{
	cout << "Input num:";
	int n;
	cin >> n;

	avtoPark newPark(n);
	//cout << newPark[0].getBody().getSerialOfMetal();
	newPark.Stats(n, newPark);
	//cout << newPark;
	templateClass <int>k (10);
	newPark.createFile();
	//cout << newPark;//оператор <<

	/*cout << endl; // шаблон класса 
	cout << "Size of Template Arrey" << k.size << endl;
	for (size_t i = 0; i < k.size; i++)
	{
		cout << i << " - " << k.Arrey[i] <<endl;
	}
	cout << k.someValue;*/
	system("pause");
}

