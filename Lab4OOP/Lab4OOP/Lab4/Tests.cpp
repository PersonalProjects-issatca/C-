#include "Tests.h"
#include "assert.h"
#include "NumarComplex.h"
#include "Repository.h"
#include "Operations.h"
#include <iostream>
using namespace std;

void test()
{
	NumarComplex ans;
	NumarComplex z1(3, 5);
	NumarComplex z2(-1, 3);
	NumarComplex z3(2, -7);
	NumarComplex z4(3, 4);
	NumarComplex z5(3, 5);
	NumarComplex z6(41, -11);

	z2.setRe(1);
	assert(z2.getRe() == 1);
	assert(z2.getIm() == 3);

	z4.setIm(2);
	assert(z4.getRe() == 3);
	assert(z4.getIm() == 2);

	z2.setRe(-1);
	z4.setIm(4);

	assert(z1 == z5);
	ans = z1;
	ans * z3;
	assert(ans == z6);

	ans = z1;
	ans + z2;
	assert(ans.getRe() == 2);
	assert(ans.getIm() == 8);

	ans = z2;
	ans - z3;
	assert(ans.getRe() == -3);
	assert(ans.getIm() == 10);

	ans = ans.adunare(z1, z2);
	assert(ans.getRe() == 2);
	assert(ans.getIm() == 8);

	ans = ans.scadere(z2, z3);
	assert(ans.getRe() == -3);
	assert(ans.getIm() == 10);

	ans = ans.inmultire(z1, z3);
	assert(ans.getRe() == 41);
	assert(ans.getIm() == -11);

	assert(ans.modul(z4) == 5);

	ans = ans.conjugat(z1);
	assert(ans.getIm() == -5);

	cout << "Testele clasei au trecut cu succes!" << endl;
}
void test_repo()
{
	Repository repo;
	NumarComplex z1(3, 5);
	NumarComplex z2(-1, 3);
	NumarComplex z3(2, -7);
	NumarComplex z4(3, 4);
	NumarComplex z5(4, 6);
	NumarComplex z6(41, -11);
	NumarComplex z7(1, 2);
	NumarComplex z8(1, 2);
	NumarComplex z9(6, 7);
	NumarComplex z10(3, 2);
	NumarComplex z11(3, 2);
	NumarComplex z12(3, 2);
	NumarComplex z13(3, 2);
	NumarComplex z14(3, 2);
	NumarComplex z15(2, 7);

	repo.addNumber(z1);
	assert(repo.getNumberFromPos(0) == z1);
	repo.addNumber(z2);
	int size = repo.getSize();
	assert(size == 2);

	cout << "Testele repository-ului au trecut cu succes!" << endl;
 }

void test_operations()
{
	int l, r;
	NumarComplex numar;
	Repository repo;
	Operations ope;
	NumarComplex z1(3, 5);
	NumarComplex z2(-1, 3);
	NumarComplex z3(2, -7);
	NumarComplex z4(3, 4);
	NumarComplex z5(4, 6);
	NumarComplex z6(41, -11);
	NumarComplex z7(1, 2);
	NumarComplex z8(1, 2);
	NumarComplex z9(6, 7);
	NumarComplex z10(3, 2);
	NumarComplex z11(3, 2);
	NumarComplex z12(3, 2);
	NumarComplex z13(3, 2);
	NumarComplex z14(3, 2);
	NumarComplex z15(2, 7);

	repo.addNumber(z1);
	repo.addNumber(z2);
	repo.addNumber(z3);
	repo.addNumber(z4);
	repo.addNumber(z5);
	repo.addNumber(z6);

	assert(ope.getGreaterNumber(repo) == z5);

	assert(ope.primulcadran(z1, numar) == true);
	assert(ope.primulcadran(z2, numar) == false);
	assert(ope.primulcadran(z3, numar) == false);
	assert(ope.primulcadran(z4, numar) == true);
	assert(ope.primulcadran(z5, numar) == true);
	assert(ope.primulcadran(z6, numar) == false);
	
	repo.addNumber(z7);
	repo.addNumber(z8);
	repo.addNumber(z9);
	repo.addNumber(z10);
	repo.addNumber(z11);
	repo.addNumber(z12);
	repo.addNumber(z13);
	repo.addNumber(z14);
	repo.addNumber(z15);

	ope.lungmax(l, r, repo);

	assert(l == 9);
	assert(r == 14);
	cout << "Testele operations-ului au trecut cu succes!" << endl;
}