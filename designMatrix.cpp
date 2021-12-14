#include "pch.h"
#include "libraries.h"
#include "prototypes.h"

void designMatrix(int i, int j)
{
	Console::Write(L"[");
	Console::Write(i); Console::Write(L"]["); Console::Write(j);
	Console::Write(L"] = ");
}