#pragma once // פאיכ נואכ³חאצ³¿
class human
{
	char* name;
	char* surname;
	int age;
public:
	human();
	human(const char* n, const char* s, int a);
	void Init();
	void Print();

	char* GetName();
	char* GetSurName();
	int GetAge();

	void SetName(const char* n);
	void SetSurname(const char* s);
	void SetAge(int a);
};

