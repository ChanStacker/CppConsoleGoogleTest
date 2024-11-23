// SutStaticLib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <string>

// TODO: This is an example of a library function
void fnSutStaticLib()
{
}

int GetStaticLibOutput(std::string input) {
	return input.size();
}

void SwapByPointer(int* x, int* y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

void SwapByRef(int& x, int& y)
{
	int z = x;
	x = y;
	y = z;
}