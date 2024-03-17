#ifndef OPERATIONS_H
#define OPERATIONS_H
#include "NumarComplex.h"
#include "Repository.h"

using namespace std;

class Operations
{
public:
	//functie care determina cea mai mare entitate
	NumarComplex getGreaterNumber(Repository& repo);

	//functie care determina daca un numar este sau nu in primul cadran in forma lui trigonometrica
	bool primulcadran(const NumarComplex& nc, NumarComplex& numar);

	//functuie care determina capetele celei mai lungi secvente cu entitati egale
	void lungmax(int& l, int& r, Repository& repo);
};
#endif