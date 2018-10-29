#include <iostream>
#include "avtoPark.h"
using namespace std;


int main()
{
	avtoPark newPark(2);
	cout << newPark[0].getBody().getSerialOfMetal();
	system("pause");
}