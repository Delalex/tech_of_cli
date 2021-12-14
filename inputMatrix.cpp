#include "pch.h"
#include "libraries.h"
#include "prototypes.h"

// функция формирования матрицы

array<double, 2>^ inputMatrix()
{
	array<double, 2>^ matrix = gcnew array<double, 2>(2, 4);
	String^ line;
	char input = '0';
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			designMatrix(i, j);
			
			line = Console::ReadLine();
			input = Convert::ToDouble(line);
			matrix[i, j] = input;
		}
	}
	return matrix;
}