#pragma once
#include "metal.h"
class body :
	public metal
{
private:
	int serialOfBudy;
	
public:
	void setSerialOfBudy(int);
	int getSerialOfBudy();
	void setBody(body k);
	body getBody();
	body();
	~body();
};


inline void body::setBody(body k)
{
	this->serialOfBudy = k.serialOfBudy;
}

inline body body::getBody()
{
	return *this;
}

inline void body::setSerialOfBudy(int k)
{
	serialOfBudy = k;
}

inline int body::getSerialOfBudy()
{
	return serialOfBudy;
}

body::body()
{
}


body::~body()
{
}
