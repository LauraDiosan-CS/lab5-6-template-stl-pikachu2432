#pragma once
#include <iostream>
using namespace std;

class Zbor
{
private:
	int zbor, loc;
	char* nume;
public:
	Zbor();
	~Zbor();
	Zbor(int z, int l, const char *n);
	Zbor(const Zbor &z);

	int get_zbor();
	int get_loc();
	char *get_nume();

	void set_zbor(int z);
	void set_loc(int l);
	void set_nume(char *n);

	Zbor& operator=(const Zbor& z);

	bool operator==(const Zbor& z) const;

	friend ostream& operator<<(ostream&, Zbor&);
	friend istream& operator>>(istream&, Zbor&);
};

