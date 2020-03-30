#include "UI.h"

void UI::afisare_meniu()
{
	cout << "Ce doriti sa efectuati?" << endl;
	cout << "1. " << endl;
	cout << "2. " << endl;
	cout << "Introduceti nr. corespunzator operatiei sau un nr. care nu e in lista pt. iesire." << endl;
}
void UI::start()
{
	cout << endl; afisare_meniu(); cout << endl;

	int op; cin >> op;
	while (op >= 1 && op <= 2)
	{
		Repo r;

		if (op == 1)
		{
			

			cout << endl; afisare_meniu();
			cout << endl << "Noua optiune:"; cin >> op;
		}
		if (op == 2)
		{
			

			cout << endl; afisare_meniu();
			cout << endl << "Noua optiune:"; cin >> op;
		}
		
		else
		{
			
		}
	}
	cout << "Aplicatie inchisa." << endl;
}