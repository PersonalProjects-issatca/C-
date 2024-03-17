#ifndef NUMARCOMPLEX_H
#define NUMARCOMPLEX_H
#include <iostream>
using namespace std;
class NumarComplex
{
private:
	int Re, Im;
public:
	//constructor
	//in: -
	//out: un obiect gol de tip numar complex
	NumarComplex();

	//copy constructor
	//in: un obiect nc de tip numar complex
	//out: un alt obiect de tip numar complex care contine aceleasi informatii ca nc
	NumarComplex(const NumarComplex& nc);

	//constructor cu parametri
	//in: o parte reala si una imaginara
	//out: un obiect de tip numar complex
	NumarComplex(int Re, int Im);

	//destructor
	//in: un obiect de tip numar complex
	//out: -
	~NumarComplex();

	//getter pt partea reala
	//in: un obiect de tip numar complex
	//out: partea reala a numarului complex
	int getRe();

	//getter pt partea imaginara
	//in: un obiect de tip numar complex
	//out: partea imaginara a unui numar complex
	int getIm();

	//setter pt partea reala
	//in: un obiect de tip numar complex si o parte reala
	//out: acelasi obiect, dar cu noua parte reala
	void setRe(int Re);

	//setter pt partea imaginara
	//in: un obiect de tip numar complex si o parte imaginara
	//out: acelasi obiect, dar cu noua parte imaginara
	void setIm(int Im);

	//functie care aduna 2 numere complexe doar cu ajutorul +-ului
	NumarComplex& operator+(const NumarComplex& nc);

	//functie care scade 2 numere complexe doar cu ajutorul - - ului
	NumarComplex& operator-(const NumarComplex& nc);

	//functie care inmulteste 2 numere complexe doar cu ajutorul *-ului
	NumarComplex& operator*(const NumarComplex& nc);

	//functie care ajuta la verificarea egalitatii
	bool operator==(const NumarComplex& nc);

	//functie care afiseaza obiectul de tip numar complex
	friend ostream& operator<<(ostream& os, const NumarComplex& nc);

	//functie care aduna 2 nr complexe
	NumarComplex adunare(const NumarComplex& nc1, const NumarComplex& nc2);
	
	//functie care scade 2 nr complexe
	NumarComplex scadere(const NumarComplex& nc1, const NumarComplex& nc2);
	
	//functie care inmulteste 2 nr complexe
	NumarComplex inmultire(const NumarComplex& nc1, const NumarComplex& nc2);
	
	//functie care calculeaza conjugatul unui numar complex
	NumarComplex conjugat(const NumarComplex& nc);
	
	//functie care calculeaza modulul unui numar complex
	double modul(const NumarComplex& nc);

	//functie care determina unghiul pentru forma trigonometrica a unui nr complex
	double unghi(const NumarComplex& nc);
};
#endif