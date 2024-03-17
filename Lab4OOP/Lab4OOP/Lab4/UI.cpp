#include <iostream>
#include "NumarComplex.h"
#include "Repository.h"
#include "Operations.h"

using namespace std;

void meniu()
{
	int l, r;
	bool rulare = true;
	Repository repo;
	NumarComplex numarcomplex;
	Operations oper;

	while (rulare)
	{
		cout << "1. Introducere numar complex;" << endl
			<< "2. Afisarea numerelor complexe;" << endl
			<< "3. Afisarea celui mai mare numar complex;" << endl
			<< "4. Afisarea numerelor complexe care se afla in primul cadran;" << endl
			<< "5. Afisarea celei mai lungi secvente in care entitatile sunt egale;" << endl
			<< "0. Inchidere aplicatie." << endl;

		int optiune;
		cin >> optiune;

		switch (optiune)
		{
		case 1:
		{
			int Re, Im;
			cout << "Partea Reala:" << endl;
			cin >> Re;
			cout << "Partea Imaginara:" << endl;
			cin >> Im;

			NumarComplex nc(Re, Im);
			repo.addNumber(nc);
			break;
		}
		case 2:
		{
			cout << "Numarul de numere complexe: " << repo.getSize() << endl;
			cout << "Elementele din sir: " << endl;
			for (int i = 0; i < repo.getSize(); i++)
				cout << endl << repo.getNumberFromPos(i)
				<< "Conjugatul sau: " << numarcomplex.conjugat(repo.getNumberFromPos(i))
				<< "Modulul sau: " << numarcomplex.modul(repo.getNumberFromPos(i)) << endl;
			break;
		}
		case 3:
		{
			cout << "Cel mai mare numar complex: " << oper.getGreaterNumber(repo);
			break;
		}
		case 4:
		{
			cout << "Numerele complexe care se afla in primul cadran sunt: " << endl;
			for (int i = 0; i < repo.getSize(); i++)
				if (oper.primulcadran(repo.getNumberFromPos(i), numarcomplex))
					cout << repo.getNumberFromPos(i);
			break;
		}
		case 5:
		{
			cout << "Cea mai lunga secventa: " << endl;
			oper.lungmax(l, r, repo);
			for (int i = l; i <= r; i++)
				cout << repo.getNumberFromPos(i);
			break;
		}
		case 0:
			rulare = false;
			break;
		}
	}
}