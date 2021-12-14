#include "pch.h"
#include "libraries.h"
#include "prototypes.h"

void calculateResult(array<double, 2>^ a, array<double, 2>^ q)
{
	double B1, B2, R1, R2;
	B1 = getMin(a, 1);
	B2 = getMin(a, 2);
	R1 = getMin(q, 1);
	R2 = getMin(q, 2);
	outputResult(B1, B2, R1, R2);
}