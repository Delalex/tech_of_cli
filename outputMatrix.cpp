#include "pch.h"
#include "libraries.h"
#include "prototypes.h"

// функция вывода введенного массива - служит для отладки

void output(array<double, 2>^ a)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
			Console::WriteLine(L"{0, 5:F1}", a[i, j]);
	}
}