#pragma once
#include "metal.h"
class engin :
	public virtual metal
{
private:
	int serialOfEngin;
public:
	void  setSerialOfEngin(int);
	int getSerialOfEngin();
	engin getEngin();
	engin();
	~engin(); 
};





inline void engin::setSerialOfEngin(int k)
{
	serialOfEngin = k;
}

inline int engin::getSerialOfEngin()
{
	return serialOfEngin;
}

inline engin engin::getEngin()
{
	return *this;
}

engin::engin()
{
}


engin::~engin()
{
}
