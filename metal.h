#pragma once
class metal
{
protected:
	int serialOfMetal;
public:
	void virtual setSerialOfMetal(int);
	int getSerialOfMetal();
	metal(int k)
	{
		serialOfMetal = k;
	}
	metal();
	~metal();
};



inline void metal::setSerialOfMetal(int k)
{
	serialOfMetal = k;
}

inline int metal::getSerialOfMetal()
{
	return serialOfMetal;
}

metal::metal()
{
	
}


metal::~metal()
{
}
