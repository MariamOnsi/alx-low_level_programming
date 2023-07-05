#include "main.h"

/**
 * _sqrt_recursion - a function that returns natural square root of a number
 * @n: number
 * @m: the square root.
 * Return: -1 if n doesn't have a natural square root
 */

int sqrt1(int n, int m);
int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}

/**
 * sqrt1 - a function that returns the square root
 * @n: number
 * @m: the square root.
 * Return:int
 */

int sqrt1(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m < n)
	{
		return (sqrt1(n, m + 1));
	}
	else
	{
		return (-1);
	}
}
