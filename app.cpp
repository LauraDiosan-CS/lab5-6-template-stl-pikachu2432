#include <iostream>
#include "Zbor.h"
#include "Repo.h"
#include "Test.h"
#include "UI.h"
using namespace std;

int main()
{
	test_z();
	test_r();
	UI u;
	u.start();
	return 0;
}