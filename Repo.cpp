#include "Repo.h"

template <class T, int CAP> Repo<T, CAP>::Repo()
{
	this->size = 0;
}
template <class T, int CAP> Repo<T, CAP>::~Repo()
{
	delete[]this->zboruri;
	this->size = 0;
}

template <class T, int CAP> void Repo<T, CAP>::add_elem(T e)
{
	if (this->size < CAP)
		this->zboruri[this->size++] = e;
	else
		cout << "Nu e spatiu." << endl;
}


