#ifndef REPOSITORY_H
#define REPOSITORY_H
#include "NumarComplex.h"
#include <vector>

using namespace std;

class Repository
{
private:
	vector<NumarComplex> NumereComplexe;
public:
	//constructor repository
	Repository();

	//destructor repository
	~Repository();

	//functie pentru adaugarea unui nou numar complex in lista de numere complexe
	void addNumber(NumarComplex& nc);

	//functie care gaseste un numar complex din lista de numere dupa o anumta pozitie
	NumarComplex getNumberFromPos(int pos);

	//functie care returneaza numarul de numere complexe din lista
	int getSize();
};
#endif