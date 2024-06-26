#include "Home.h"
#include<iostream>
using namespace std;

Home::Home()
{
	quant = 0;
	object = nullptr;
}

Home::Home(int qnt)
{
	if (qnt > 0) { 
		quant = qnt; 
	}
}

Home::Home(Apartment* obj, int qnt):Home(qnt)
{
	obj = new Apartment[qnt];
	for (int i = 0; i < qnt; i++) {
		object[i] = obj[i];
	}
}

Home::~Home() 
{
	delete[]object;
	quant = 0;
}

Home::Home(const Home& d)
{
	
	quant = d.quant;
	for (int i = 0; i < quant; i++) {
		object[i] = d.object[i];
	}
}

void Home::Setquant(int qnt)
{
	if (qnt > 0) {
		quant = qnt;
	}
}

void Home::Setobject(const Apartment* obj, int qnt)
{
	obj = new Apartment[qnt];
	for (int i = 0; i < qnt; i++) {
		object[i] = obj[i];
	}

}

int Home::Getquant() const
{
	return quant;
}

const Apartment* Home::Getobject() const
{
	return object;
}

void Home::Print() const
{
	cout << "Apartment" << object << endl;
}
