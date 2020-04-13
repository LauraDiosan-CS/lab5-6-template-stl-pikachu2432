#include "Test.h"
void test_z()
{
	Zbor z1 = Zbor();
	assert(z1.get_zbor() == 0);
	assert(z1.get_loc() == 0);
	assert(z1.get_nume() == NULL);

	Zbor z2 = Zbor(10, 15, "ana");
	assert(z2.get_zbor() == 10);
	assert(z2.get_loc() == 15);

	char*z = z2.get_nume();
	assert(strcmp(z, z2.get_nume()) == 0);

	Zbor z3 = Zbor(4, 5, "ion");
	z3.set_zbor(7);
	z3.set_loc(6);
	assert(z3.get_zbor() == 7);
	assert(z3.get_loc() == 6);

	cout << "Testele pentru clasa Zbor functioneaza." << endl;
}
void test_r()
{
	Zbor z1 = Zbor(1, 2, "ana");
	Zbor z2 = Zbor(10, 15, "ion");
	Zbor z3 = Zbor(4, 5, "mara");

	Repo<Zbor> r;
	assert(r.get_size() == 0);

	r.add_elem(z1);
	r.add_elem(z2);
	r.add_elem(z3);
	assert(r.get_size() == 3);

	Zbor zb(3, 19, "eva");
	r.upd_elem(z2, 9, 21, "radu");

	assert(r.find_elem(zb) == 1);
	assert(r.find_elem(z2) == -1);

	cout << "Testele pentru clasa Repo functioneaza." << endl;
}
void test_s()
{
	Service s;

	s.add_zbor(1, 2, "ana");
	s.add_zbor(10, 15, "ion");
	s.add_zbor(4, 5, "mara");

	assert(s.find_zbor(10, 15, "ion") == -1);
	
	s.del_zbor(4, 5, "mara");
	assert(s.find_zbor(4, 5, "mara") == -1);
	
	s.upd_zbor(1, 3, 2, 19, "ana", "eva");

	cout << "Testele pentru clasa Service functioneaza." << endl;
}