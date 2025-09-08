#include "human.h"// файл дизайну
#include <iostream>
using namespace std;

human::human()
{
	cout << "Construstor" << endl;
}

human::human(const char* n, const char* s, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);

	age = a;
}

void human::Init(const char* n, const char* s, int a)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	if (surname != nullptr)
	{
		delete[] surname;
	}
	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);

	age = a;
}

void human::Print()
{
	cout << "Name: " << surname << " " << name << endl;
	cout << "Age: " << endl;
}

char* human::GetName()
{
	return name;
}

char* human::GetSurName()
{
	return surname;
}

int human::GetAge()
{
	return age;
}

void human::SetName(const char* n)
{
	delete[] name;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void human::SetSurname(const char* s)
{
	delete[] surname;
	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);
}

void human::SetAge(int a)
{
	age = a;
}
