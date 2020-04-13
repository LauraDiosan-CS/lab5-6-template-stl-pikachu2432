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
	Zbor zb1(z1, l1, n1);
	//Zbor zb2(z2, l2, n2);
	repo.upd_elem(zb1, z2, l2, n2);
}

void Service::rez_zbor()
{
	cout << "Introduceti nr. zborului: ";
	int zb; cin >> zb;

	if (1!=1)//verifica daca sunt locuri
		cout << "Nu mai exista locuri." << endl;
	else
	{
		cout << "Introduceti locul:";
		int l; cin >> l;
		for (int i = 0; i < repo.get_size(); i++)
		{
			if (repo.get_elem(i).get_loc() == l) //verif daca locul e ocupat
				cout << "Locul solicitat nu e liber. Pentru a renunta apasati 0. Pentru a continua introduceti un alt loc.";
			else
			{
				cout << "Introduceti numele: ";
				char* n = new char[10];
				cin >> n;

				Zbor z1(zb, l, n);
				repo.add_elem(z1);
				cout << "Rezervarea a fost facuta.";
			}
		}
	}
}

void Service::modif_rez()
{

	cout << "Introduceti nr. zborului: ";
	int zb; cin >> zb;

	cout << "Introduceti locul:";
	int l; cin >> l;

	cout << "Introduceti numele: ";
	char* n = new char[10];
	cin >> n;

	Zbor z1(zb, l, n);

	int max = 25; //nr maxim de locuri
	if (l > max)
		cout << "Locul nu exista.";
	else
	{
		for (int i = 0; i < repo.get_size(); i++)
		{
			if (repo.find_elem(z1) == -1) //verif daca rez exista
				cout << "Rezervarea nu exista.";
			else
			{
				cout << "Introduceti noul loc: ";
				int l1; cin >> l1;

				for (int i = 0; i < repo.get_size(); i++)
				{
					if (repo.get_elem(i).get_loc() == l1) //verif daca locul e ocupat
						cout << "Locul este ocupat.";
					else
					{
						upd_zbor(zb, zb, l, l1, n, n);
						cout << "Locul a fost modificat.";
					}
				}
			}
		}
	}
}