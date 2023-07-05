#include "main.h"
#include <math.h>

/**
 * is_prime_number - to check the prime number
 * @n: is the number
 * Return: int
 */

int prime(int n, int m);
int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - is a function to the prime number
 * @n: is the number
 * @m: is to check
 * Return: int
 */

int prime(int n, int m)
{
	if (m <= n && n > 1)
	{
		return (1);
	}
	else if (n % m == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, m + 1));
	}
}
