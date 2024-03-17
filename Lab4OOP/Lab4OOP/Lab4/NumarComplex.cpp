#include "NumarComplex.h"
#include <iostream>
#include <math.h>


NumarComplex::NumarComplex()
{
	this->Re = 0;
	this->Im = 0;
}

NumarComplex::NumarComplex(const NumarComplex& nc)
{
	this->Re = nc.Re;
	this->Im = nc.Im;
}

NumarComplex::NumarComplex(int Re, int Im)
{
	this->Re = Re;
	this->Im = Im;
}

NumarComplex::~NumarComplex() {}

int NumarComplex::getRe()
{
	return this->Re;
}

int NumarComplex::getIm()
{
	return this->Im;
}

void NumarComplex::setRe(int Re)
{
	this->Re = Re;
}

void NumarComplex::setIm(int Im)
{
	this->Im = Im;
}

NumarComplex& NumarComplex::operator+(const NumarComplex& nc)
{
	this->setRe(this->Re + nc.Re);
	this->setIm(this->Im + nc.Im);
	return *this;
}

NumarComplex& NumarComplex::operator-(const NumarComplex& nc)
{
	this->setRe(this->Re - nc.Re);
	this->setIm(this->Im - nc.Im);
	return *this;
}

NumarComplex& NumarComplex::operator*(const NumarComplex& nc)
{
	int real = this->Re * nc.Re - this->Im * nc.Im;
	int imag = this->Re * nc.Im + this->Im * nc.Re;
	this->setRe(real);
	this->setIm(imag);
	return *this;
}

bool NumarComplex::operator==(const NumarComplex& nc)
{
	return this->Re == nc.Re && this->Im == nc.Im;
}

ostream& operator<<(ostream& os, const NumarComplex& nc)
{
	int imag = nc.Im;
	if (nc.Im < 0)
		return os << nc.Re << " - " << -1 * nc.Im << "i\n";
	return os << nc.Re << " + " << nc.Im << "i\n";
}

NumarComplex NumarComplex::adunare(const NumarComplex& nc1, const NumarComplex& nc2)
{
	int real = nc1.Re + nc2.Re;
	int imag = nc1.Im + nc2.Im;
	NumarComplex ans(real, imag);
	return ans;
}

NumarComplex NumarComplex::scadere(const NumarComplex& nc1, const NumarComplex& nc2)
{
	int real = nc1.Re - nc2.Re;
	int imag = nc1.Im - nc2.Im;
	NumarComplex ans(real, imag);
	return ans;
}

NumarComplex NumarComplex::inmultire(const NumarComplex& nc1, const NumarComplex& nc2)
{
	int real = nc1.Re * nc2.Re - nc1.Im * nc2.Im;
	int imag = nc1.Re * nc2.Im + nc1.Im * nc2.Re;
	NumarComplex ans(real, imag);
	return ans;
}

NumarComplex NumarComplex::conjugat(const NumarComplex& nc)
{
	int imag = -1 * nc.Im;
	NumarComplex ans(nc.Re, nc.Im);
	ans.Im = imag;
	return ans;
}

double NumarComplex::modul(const NumarComplex& nc)
{
	return sqrt(nc.Re * nc.Re + nc.Im * nc.Im);
}

double NumarComplex::unghi(const NumarComplex& nc)
{
	int r = nc.Re, i = nc.Im;
	if (r != 0)
		return atan(i / r);
	return 0;
}