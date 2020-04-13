#pragma once
#include <fstream>
#include "Repo.h"

template <class T>
class RepoFile : public Repo <T>
{
private:
	list<T> elem;
	
public:
	void loadFromFile();
	void saveToFile();
};

template<class T>
void RepoFile<T>::loadFromFile()
{
	ifstream fin("Zboruri.in");

	int zb, l;
	char* n = new char[10];

	elem.clear();
	while (!fin.eof()) 
	{
		fin >> zb >> l >> n;
		if (strcmp(n, "") != 0)
		{
			Zbor z(zb, l, n);
			elem.push_back(z);
		}
	}
	delete[] n;
	fin.close();
}

template<class T>
void RepoFile<T>::saveToFile()
{
	ofstream fout("Zboruri.out");
	for (int i = 0; i < elem.size(); i++)
	{
		fout << elem[i];
	}
	fout.close();
}