#include "UI.h"

void UI::citire_zbor()
{
	cout << "Introduceti nr. zborului: ";
	int zb; cin >> zb;

	cout << "Introduceti locul:";
	int l; cin >> l;

	cout << "Introduceti numele: ";
	char* nume = new char[10];
	cin >> nume;
}

void UI::citire_fisier()
{
	rf.loadFromFile();
}

void UI::afisare() 
{
	list<Zbor> zboruri = s.get_all();
	for (Zbor zb : zboruri) 
		cout << zb;
}

void UI::salvare()
{
	rf.saveToFile();
}

void UI::afisare_meniu()
{
	cout << "Ce doriti sa efectuati?" << endl;
	cout << "1. Citirea datelor din fisier." << endl;
	cout << "2. Afisarea tuturor datelor." << endl;
	cout << "3. Rezervarea unui loc." << endl;
	cout << "4. Modificarea unei rezervari." << endl;
	cout << "Introduceti nr. corespunzator operatiei sau 0 pt. iesire." << endl;
}
void UI::start()
{
	bool ok = false;
	while (!ok) 
	{
		cout << endl; afisare_meniu(); cout << endl;
		int opt; cin >> opt;
		switch (opt) 
		{
			case 0: {ok = true; cout << "Aplicatie inchisa." << endl; }
			case 1: { citire_fisier(); break; }
			case 2: { afisare(); break; }
			case 3: { s.rez_zbor(); salvare(); break; }
			case 4: { s.modif_rez(); break; }
			default: {cout << "Optiunea nu exista. Incercati alta optiune:" << endl; }
		}
	}
}