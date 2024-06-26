#pragma once
#include "Apartment.h"
class Home
{
private:
	int quant;
	Apartment * object;

public:
	Home();
	Home(int qnt);
	Home(Apartment* obj, int qnt);
	~Home();
	Home(const Apartment& b);

	void Setquant(int qnt);
	void Setobject(const Apartment* obj, int qnt);


	int Getquant()const;
	const Apartment* Getobject()const;

	void Print()const;
};

