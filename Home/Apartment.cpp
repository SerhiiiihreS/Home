#include "Apartment.h"
#include<iostream>
using namespace std;


Apartment::Apartment()
{
	square = 0;
	quantity = 0;
	tenants = nullptr;
}

Apartment::Apartment(int sq)
{
	if (sq > 0) {
		square = sq;
	}
}

Apartment::Apartment(int qnt, int sq):Apartment(sq)
{
	if (qnt > 0) {
		quantity = qnt;
	}
}

Apartment::Apartment(Human* tns, int qnt, int sq):Apartment(qnt,sq)
{
	tns = new Human[qnt];
	for (int i = 0; i < qnt; i++) {
		tenants[i] = tns[i];
	}


}

Apartment::~Apartment()
{
	delete[]tenants;
	square = 0;
	quantity = 0;
}

Apartment::Apartment(const Apartment& b)
{
	square = b.square;
	quantity = b.quantity;
	for (int i = 0; i < quantity; i++) {
		tenants[i] = b.tenants[i];
	}
}

void Apartment::Setsquare(int sq)
{
	if (sq > 0) {
		square = sq; 
	}
}

void Apartment::Setquantity(int qnt)
{
	if (qnt > 0) {
		quantity = qnt;  
	}
}

void Apartment::Settenants(const Human* tns,int qnt) 
{
	tns = new Human[qnt];
	for (int i = 0; i < qnt; i++) {
		tenants[i] = tns[i];
	}
}

int Apartment::Getsquare() const
{
	return square;
}

int Apartment::Getquantity() const
{
	return quantity;
}

const Human* Apartment::Gettenants() const
{
	return tenants;
}

void Apartment::Print() const
{
	cout <<"tenants" << tenants << endl;
	cout <<"quantity" << quantity << endl;
	cout << "square" << square << endl; 
}
