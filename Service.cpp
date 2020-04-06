#include "Service.h"

Service::Service(const Repo<Zbor>& r)
{
	repo = r;
}

void Service::setRepo(const Repo<Zbor>& r)
{
	repo = r;
}

list<Zbor> Service::get_all()
{
	list<Zbor> rez = repo.get_all();
	list<Zbor> v(rez.begin(), rez.end());
	return v;
}

void Service::add_zbor(int z, int l, const char* n)
{
	Zbor z1(z, l, n);
	repo.add_elem(z1);
}

void Service::del_zbor(int z, int l, const char* n)
{
	Zbor z1(z, l, n);
	repo.elim_elem(z1);
}

int Service::find_zbor(int z, int l, const char* n)
{
	Zbor z1(z, l, n);
	return repo.find_elem(z1);
}

void Service::upd_zbor(int z1, int z2, int l1, int l2, const char* n1, const char* n2)
{
	Zbor zb1(z1, l1, n1), zb2(z2, l2, n2);
	repo.upd_elem(zb1, zb2);
}

void Service::modif_rez(int z, int l, const char* n)
{
	int max = 25; //nr maxim de locuri
	if (l > max)
		cout << "Locul nu exista.";
	else
	{
		Zbor z1(z, l, n);
		for (int i = 0; i < repo.get_size(); i++)
		{
			if (repo.find_elem(z1) == -1)
				cout << "Rezervarea nu exista.";
			else
			{
				cout << "Introduceti noul loc: ";
				int l1; cin >> l1;
				for (int i = 0; i < repo.get_size(); i++)
					if (repo.find_elem(z1).get_loc() == l1)
						cout << "Locul este ocupat.";
					else
						upd_zbor(z, z, l, l1, n, n);
			}
		}
	}
}