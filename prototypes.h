#pragma once
#include "libraries.h"

void designMatrix(int, int);
array<double, 2>^ inputMatrix();
void outputMatrix(array<double, 2>^);
double getMin(array<double, 2>^, int);
void outputResult(double, double, double, double);
void calculateResult(array<double, 2>^, array<double, 2>^);