#pragma once
template <typename T>
class templateClass
{
public:
	T * Arrey;
	int size;
	T someValue;

	templateClass(int n);
	~templateClass();
};


template <typename T>
templateClass<T>::templateClass (int n)
{
	Arrey = new T[n];
	size = n;
	for (size_t i = 0; i < size; i++)
	{
		Arrey[i] = 1 + rand() % 500;
	}
	someValue = 1 + rand() % 500;
}

template <typename T>
templateClass<T>::~templateClass()
{

}
