#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include "avtoPark.h"
#include <thread>
#include "tamplateClass.h"
#include "container.h"
#include <string>
#include <mutex>
#include <vector>
#include <fstream>
using namespace std;



template <class T>
double avarage(const T *array, int size);
template <class T>
void bubbleSort(std::vector<T *> &a);
static void compareDyn(unsigned int size);


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

template <typename T>
void firstPart(T n)
{

	fstream f;
	f.open("D:\\game\\d3ec.txt", fstream::out | fstream::trunc);
	if (!f.is_open()) cout << "error";
	string h;

	h = typeid(n).name();
	h += " Have Size: " + to_string(sizeof(typeid(T))) + "\n";
	f << h;
	for (int i = 0; i < n.numOfCar; i++) {
		h = "Metal Serial: " + to_string(n[i].getSerialOfEngin()) + "\n";
		f << h;
	}

	f.close();

	ifstream i;
	i.open("D:\\game\\d3ec.txt");
	if (!i.is_open()) cout << "error";
	string k;
	for (string word; i >> word; )
		k = k + " " + word;
	
	cout << k;
	
}
mutex a;
void threadFillFile(int m)
{
	avtoPark Kiev(m);
	fstream f;
	a.lock();
	f.open("D:\\game\\thread.txt", fstream::out | fstream::ate | fstream::app);
	if (!f.is_open()) cout << "error";
	string h;
	h = typeid(Kiev).name();
	h += " Have Size: " + to_string(sizeof(typeid(Kiev))) + "\n";
	f << h;
	for (int i = 0; i <m; i++) {
		h = "Metal Serial: " + to_string(Kiev[i].getSerialOfEngin()) + "\n";
		f << h;
	}
	a.unlock();
}


int main()
{
	int n = 2;
	
	/*cout << "Input num:";
	
	cin >> n;*/

	try {   // try-блок для исключений pushOnFull
		if (fabs(n) < 0) throw - 1;
	}
	catch (int i) {

		cerr << "Error" << i;
		return -1;
	}
	avtoPark Kiev(10);

	int k = 0;
	firstPart(Kiev);


	compareDyn(100000);
	cout << "How much thread?: "; cin >> k;
	for (int i = 0; i < k; i++)
	{
		thread tr(threadFillFile, 10);
		tr.join();
	}
	

	////cout << newPark[0].getBody().getSerialOfMetal();
	//newPark.Stats(n, newPark);
	////cout << newPark;
	//templateClass <int>k (10);
	//newPark.createFile();
	////cout << newPark;//оператор <<

	///*cout << endl; // шаблон класса 
	//cout << "Size of Template Arrey" << k.size << endl;
	//for (size_t i = 0; i < k.size; i++)
	//{
	//	cout << i << " - " << k.Arrey[i] <<endl;
	//}
	//cout << k.someValue;*/
	system("pause");
}


template <class T>
double avarage(const T *array, int size) {
	double avarage = 0;
	for (int i = 0; i < size; i++) {
		avarage = avarage + static_cast<int>(array[i]);
	}
	return (avarage / size);
}

static void compareDyn(unsigned int size) {
	Container<avtoPark,car, metal, body, engin > vec1(size);
	

	clock_t startTime;
	clock_t endTime;
	clock_t duration;


	startTime = clock();
	std::cout << "Sort 1 start" << std::endl;
	std::sort(vec1.A_vec.begin(), vec1.A_vec.end());
	std::cout << "Sort 1 end" << std::endl;
	endTime = clock();

	duration = static_cast<double>(static_cast<double>(endTime) - startTime) / CLOCKS_PER_SEC * 1000;
	std::cout << "Elapsed time for function SORT: " << static_cast<double>(duration) << " ms" << std::endl << std::endl;


	startTime = clock();
	std::cout << "Sort 1 start bubble" << std::endl;
	bool swapp = true;
	avtoPark* temp;
	while (swapp) {
		swapp = false;
		for (size_t i = 0; i < vec1.A_vec.size() - 1; i++) {
			if (vec1.A_vec[i] > vec1.A_vec[i + 1]) {
				temp = vec1.A_vec.at(i);
				vec1.A_vec.at(i) = vec1.A_vec.at(i + 1);
				vec1.A_vec.at(i + 1) = temp;
				swapp = true;
			}
		}
	}
	std::cout << "Sort 1 end bubble" << std::endl;
	endTime = clock();


	duration = static_cast<double>(static_cast<double>(endTime) - startTime) / CLOCKS_PER_SEC * 1000;
	std::cout << "Elapsed time bubble: " << static_cast<double>(duration) << " ms" << std::endl << std::endl;
}



	
	


