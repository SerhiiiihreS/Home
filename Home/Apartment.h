#pragma once
#include "Human.h" 

class Apartment
{
private:
	int square;
	int quantity;
	Human* tenants;
	
public:
	Apartment();
	Apartment(int sq); 
	Apartment(int qnt, int sq);
	Apartment(Human* tns, int qnt, int sq);
	~Apartment();
	Apartment(const Apartment& b);

	void Setsquare(int sq);
	void Setquantity(int qnt);
	void Settenants(const Human*tns,int qns);


	int Getsquare()const;
	int Getquantity()const;
	const Human* Gettenants()const;

	void Print()const;


};

