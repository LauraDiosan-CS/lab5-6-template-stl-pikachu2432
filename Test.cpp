#include "Test.h"
void test_z()
{
	Zbor z1 = Zbor();
	assert(z1.get_zbor() == 0);
	assert(z1.get_loc() == 0);
	assert(z1.get_nume() == NULL);

	Zbor z2 = Zbor(10, 15, "roma");
	assert(z2.get_zbor() == 10);
	assert(z2.get_loc() == 15);

	char*z = z2.get_nume();
	assert(strcmp(z, z2.get_nume()) == 0);

	Zbor z3 = Zbor(4, 5, "japonia");
	z3.set_zbor(7);
	z3.set_loc(6);
	assert(z3.get_zbor() == 7);
	assert(z3.get_loc() == 6);

	cout << "Testele pentru clasa Examen functioneaza." << endl;
}
void test_r()
{
	Zbor z1 = Zbor(1, 2, "iasi");
	Zbor z2 = Zbor(10, 15, "roma");
	Zbor z3 = Zbor(4, 5, "japonia");

}
