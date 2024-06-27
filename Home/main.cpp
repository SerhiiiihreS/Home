#include<iostream>
using namespace std;
#include "Home.h"
#include "Human.h"
#include "Apartment.h"


int main() {
	Human s1("wrfr","dvfb",23);
	Human s2("jxnk","klgbngl",56);
	Human arr[2] = {s1,s2 };
	Apartment d(arr, 2, 200);
	Apartment v(arr, 2, 300);
	Apartment arr1[2] = { d,v };
	Home a(arr1, 2);   
	a.Print();
}