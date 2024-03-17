#include <iostream>
#include "Repository.h"
#include "NumarComplex.h"
#include <vector>

using namespace std;

Repository::Repository() {}

Repository::~Repository() {}

void Repository::addNumber(NumarComplex& nc)
{
	this->NumereComplexe.push_back(nc);
}

NumarComplex Repository::getNumberFromPos(int pos)
{
	return this->NumereComplexe.at(pos);
}

int Repository::getSize()
{
	return this->NumereComplexe.size();
}