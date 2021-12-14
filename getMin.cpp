#include "pch.h"
#include "libraries.h"
#include "prototypes.h"

// функция поиска минимального элемента в столбце

double getMin(array<double, 2>^ a, int side)
{
	double min = 99999;
	int k = 0;

	if (side == 1) // левый столбец матрицы
	{
		if (a[0, 0] < min)
			min = a[0, 0];
		if (a[0, 2] < min)
			min = a[0, 2];
		if (a[1, 0] < min)
			min = a[1, 0];
		if (a[1, 2] < min)
			min = a[1, 2];
	}
	if (side == 2) // правый столбец матрицы
	{
		if (a[0, 1] < min)
			min = a[0, 1];
		if (a[0, 3] < min)
			min = a[0, 3];
		if (a[1, 1] < min)
			min = a[1, 1];
		if (a[1, 3] < min)
			min = a[1, 3];
	}
	if (side == 3) // оба столбца
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (a[i, j] < min)
					min = a[i, j];
			}
		}
	}

	return min;
}