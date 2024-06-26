#include "Human.h"
#include<iostream>
using namespace std;

Human::Human(char* nm)
{
	this->Name = new char[strlen(nm) + 1];
	strcpy_s(this->Name, strlen(nm) + 1, nm); 
}

Human::Human(char* nm, char* srn):Human(nm)
{
	this->Surname = new char[strlen(srn) + 1]; 
	strcpy_s(this->Surname, strlen(srn) + 1, srn); 
}

Human::Human(char* nm, char* srn, int ag):Human(nm,srn) 
{
	if (ag > 0 && ag < 100) {
		age = ag;
	}
}

Human::~Human()
{
	delete[]Name;
	delete[]Surname;
	age = 0;

}

Human::Human(const Human& b)
{
	this->Name = new char[strlen(b.Name) + 1];
	strcpy_s(this->Name, strlen(b.Name) + 1, b.Name);
	this->Surname = new char[strlen(b.Surname) + 1];
	strcpy_s(this->Surname, strlen(b.Surname) + 1, b.Surname);
	age = b.age;
}

void Human::SetName(const char* nm)
{
	if (this->Name != nullptr) {
		delete[]Name;
	}
	this->Name = new char[strlen(nm) + 1];
	strcpy_s(this->Name, strlen(nm) + 1, nm);
}

void Human::SetSurname(const char* srn)
{
	if (this->Surname != nullptr) {
		delete[]Surname;
	}
	this->Surname = new char[strlen(srn) + 1];
	strcpy_s(this->Surname, strlen(srn) + 1, srn);
}

void Human::SetAge(int ag)
{
	if (ag > 0 && ag < 100) { 
		age = ag; 
	} 
}

const char* Human::GetName() const
{
	return Name;
}

const char* Human::GetSurname() const
{
	return Surname;
}

int Human::GetAge() const
{
	return age;
}

void Human::Print() const
{
	  
	cout << "Name" << Name << endl << "Surname" << Surname <<endl<< "Age" << age; 
} 
