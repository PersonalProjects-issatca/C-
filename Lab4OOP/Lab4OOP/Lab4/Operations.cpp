#include <iostream>
#include "NumarComplex.h"
#include "Repository.h"
#include "Operations.h"

using namespace std;

NumarComplex Operations::getGreaterNumber(Repository& repo)
{
	int maxre = 0, maxim = 0, pos = 0;
	for (int i = 0; i < repo.getSize(); i++)
	{
		if (repo.getNumberFromPos(i).getRe() > maxre && repo.getNumberFromPos(i).getIm() > maxim)
		{
			maxre = repo.getNumberFromPos(i).getRe();
			maxim = repo.getNumberFromPos(i).getIm();
			pos = i;
		}
	}
	return repo.getNumberFromPos(pos);
}

bool Operations::primulcadran(const NumarComplex& nc, NumarComplex& numar)
{
	if (numar.unghi(nc) > 0 && numar.unghi(nc) < 22 / 7)
		return true;
	return false;
}

void Operations::lungmax(int& l, int& r, Repository& repo)
{
	l = 0, r = 0;
	int n = repo.getSize();
	for (int i = 0; i < n-1; i++)
		if (repo.getNumberFromPos(i) == repo.getNumberFromPos(i+1))
		{
			int j = i;
			while (j + 1 < n && repo.getNumberFromPos(j) == repo.getNumberFromPos(j+1))
				j++;
			if (j - i + 1 > r - l + 1)
				l = i, r = j;
			i = j;
		}
}