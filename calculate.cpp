#include "calculate.h"

int sum(int a, int b)
{
	return a + b;
}

int diff(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

int cleavage(int a, int b)
{
	return a / b;
}

int fact(int a)
{
	if (a == 1)
	{
		return a;
	}
	else
		return a * fact(a - 1);
}

int exp(int a, int b)
{
	if (b==1)
	{
		return a;
	}
	if (b==0)
	{
		return 1;
	}
	else
	{
		return a * exp(a, b - 1);
	}
		
}