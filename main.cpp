#include "pch.h"
#include "libraries.h"
#include "prototypes.h"

// основная функция
int main(array<String ^> ^args)
{
	array<double, 2>^ matrA = gcnew array<double, 2>(2, 4);
	array<double, 2>^ matrQ = gcnew array<double, 2>(2, 4);
	double min;
	double B1, B2;
	double R1, R2;

	Console::WriteLine(L"Матрица A:"); // Заполнение матрицы A
	matrA = inputMatrix();	

	Console::WriteLine(L"Матрица Q:"); // Заполнение матрицы Q
	matrQ = inputMatrix();

	// вывод массивов минимальных элементов
	calculateResult(matrA,matrQ);

	return 0;
}
