#include "pch.h"
#include "libraries.h"
#include "prototypes.h"

void outputResult(double B1, double B2, double R1, double R2)
{
	Console::WriteLine(L"Arrays with minimal elements in columns: ");
	Console::Write(L"B = ");
	Console::Write(B1);
	Console::Write(L" ");
	Console::Write(B2);
	Console::Write(L"     ");
	Console::Write(L"R = ");
	Console::Write(R1);
	Console::Write(L" ");
	Console::Write(R2);
}