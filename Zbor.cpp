#include "Zbor.h"
Zbor::Zbor()
{
	this->zbor = 0;
	this->loc = 0;
	this->nume = NULL;
}
Zbor::~Zbor()
{
	delete[] this->nume;
	this->nume = NULL;
}
Zbor::Zbor(int no, int d, const char *n)
{
	this->zbor = no;
	this->loc = d;
	this->nume = new char[strlen(n) + 1];
	strcpy_s(this->nume, strlen(n) + 1, n);
}
Zbor::Zbor(const Zbor &e)
{
	this->zbor = e.zbor;
	this->loc = e.loc;
	this->nume = new char[strlen(e.nume) + 1];
	strcpy_s(this->nume, strlen(e.nume) + 1, e.nume);
}

int Zbor::get_zbor()
{
	return this->zbor;
}
int Zbor::get_loc()
{
	return this->loc;
}
char *Zbor::get_nume()
{
	return this->nume;
}

void Zbor::set_zbor(int n)
{
	this->zbor = n;
}
void Zbor::set_loc(int d)
{
	this->loc = d;
}
void Zbor::set_nume(char *n)
{
	this->nume = new char[strlen(n) + 1];
	strcpy_s(this->nume, strlen(n) + 1, n);
}

Zbor& Zbor::operator=(const Zbor& e)
{
	this->set_zbor(e.zbor);
	this->set_loc(e.loc);
	this->set_nume(e.nume);
	return *this;
}

bool Zbor::operator==(const Zbor& rhs) const
{
	return (zbor == rhs.zbor) && (loc == rhs.loc) && (nume == rhs.nume);
}
