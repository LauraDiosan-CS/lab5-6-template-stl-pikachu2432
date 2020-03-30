#pragma once
#include "Zbor.h"
#include <list>

template <class T, int CAP = 10>
class Repo
{
private:
	list<T> zboruri[CAP];
	int size;
public:
	Repo();
	~Repo();
	void add_elem(T el);
};
