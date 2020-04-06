#pragma once
#include <fstream>
#include "Repo.h"



template <class T>
class RepoFile : public Repo <T>
{
private:
	list<T> elem;
	ifstream fin("Zboruri.in");
	ofstream fout("Zboruri.out");
public:
	RepoFile():Repo() {}
	~RepoFile() {}

	void loadFromFile();
};

template<class T>
void RepoFile<T>::loadFromFile()
{
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
