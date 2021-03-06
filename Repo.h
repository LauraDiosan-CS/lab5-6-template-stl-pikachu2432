#pragma once
#include "Zbor.h"
#include <list>

template <class T>
class Repo
{
private:
	list<T> elem;
public:
	Repo<T>() {}
	~Repo() {}

	list<T> get_all();
	int get_size();

	void add_elem(const T&);
	void elim_elem(const T&);
	int find_elem(const T&);
	//void upd_elem(const T& e1, const T& e2);
	void upd_elem(const T& e1, int zb, int l, const char* n);

	Zbor get_elem(int i);
};

template<class T>
list<T> Repo<T>::get_all()
{
	return elem;
	return list<T>();
}

template<class T>
int Repo<T>::get_size()
{
	return elem.size();
}

template<class T>
void Repo<T>::add_elem(const T &e)
{
	elem.push_back(e);
}

template<class T>
void Repo<T>::elim_elem(const T &e)
{
	elem.remove(e);
}

template<class T>
int Repo<T>::find_elem(const T &e)
{
	int i = 0;
	for (T crt : elem)
	{
		if (crt == e)
			return i;
		i++;
	}
	return -1;
}

template<class T>
Zbor Repo<T>::get_elem(int i)
{
	list<Zbor>::iterator it;
	it = elem.begin();
	advance(it, 4);
	return *it;
}

template <class T> 
void Repo<T>::upd_elem(const T& e1, int zb, int l, const char* n)
{
	list<Zbor>::iterator it;
	it = find(elem.begin(), elem.end(), e1);
	
	if (it != elem.end())
	{
		(*it).set_zbor(zb);
		(*it).set_loc(l);
		//(*it).set_nume(n);
	}
}
/*
template<class T>
void Repo<T>::upd_elem(const T& e1, const T& e2)
{
	int i = 0;
	for (T crt : elem)
	{
		if (crt == e1)
			e1 = e2; 
		i++;
	}
}*/