#include "pch.h"
#include "libraries.h"
#include "prototypes.h"
// функция формирования матрицы
void input(array<double, 2>^ a)
{
	String^ line;
	char input = '0';
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			designMatrix(i, j);

			line = Console::ReadLine();
			input = Convert::ToDouble(line);
		}
	}
}

// функция вывода введенного массива - служит для отладки
void output(array<double, 2>^ a)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
			Console::WriteLine(L"{0, 5:F1}", a[i,j]);
	}
}

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

// основная функция
int main(array<String ^> ^args)
{
	//array<double>^ mas = gcnew array<double>(n*m);
	array<double, 2>^ matrA = gcnew array<double, 2>(2, 4);
	array<double, 2>^ matrQ = gcnew array<double, 2>(2, 4);
	double min;

	Console::WriteLine(L"Матрица A:"); // Заполнение матрицы A
	input(matrA);	

	Console::WriteLine(L"Матрица Q:"); // Заполнение матрицы Q
	input(matrQ);

	// вывод массивов минимальных элементов
	Console::WriteLine(L"Arrays with minimal elements in columns: ");
	Console::Write(L"B = ");
	Console::Write(getMin(matrA, 1));
	Console::Write(L" ");
	Console::Write(getMin(matrA, 2));
	Console::Write(L"   ");
	Console::Write(L"R = ");
	Console::Write(getMin(matrQ, 1));
	Console::Write(L" ");
	Console::Write(getMin(matrQ, 2));

	min = getMin(matrA, 1);
	Console::WriteLine("End");

	return 0;
}
