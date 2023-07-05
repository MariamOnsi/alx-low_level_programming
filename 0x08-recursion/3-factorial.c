#include "main.h"

/**
 * factorial -  a function that returns the factorial
 * @n: the number
 * Return: -1 if n < 0, 0 if n =0, factorial if n >0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
