#pragma once
class metal
{
protected:
	int serialOfMetal;
public:
	void virtual setSerialOfMetal(int);
	int virtual getSerialOfMetal();
	metal(int k)
	{
		serialOfMetal = k;
	};
	metal();
	virtual ~metal();
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
	//printf("Metal Crear");
}


metal::~metal()
{
	//printf("Metal Del");
}
