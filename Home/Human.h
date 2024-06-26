#pragma once
class Human
{
private:
	int age;
	char* Name;
	char* Surname;
public:
	Human() = default;
	Human(char* nm);
	Human(char* nm, char* srn);
	Human(char* nm, char* srn, int ag);
	~Human();
	Human(const Human& b);

	void SetName(const char* nm);
	void SetSurname(const char* srn);
	void SetAge(int ag);


	const char* GetName()const;
	const char* GetSurname()const;
	int GetAge()const;

	void Print()const;

};

