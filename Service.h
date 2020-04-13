#pragma once
#include "Repo.h"

class Service
{
private:
	Repo<Zbor> repo;

public:
	Service() {}
	~Service() {}
	Service(const Repo<Zbor>&);

	list<Zbor> get_all();

	void setRepo(const Repo<Zbor>&);
	
	void add_zbor(int z, int l, const char* n);
	void del_zbor(int z, int l, const char* n);
	int find_zbor(int z, int l, const char* n);
	void upd_zbor(int z1, int z2, int l1, int l2, const char* n1, const char* n2);

	void rez_zbor();
	void modif_rez();
};

