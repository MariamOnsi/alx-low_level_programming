#include "main.h"
/**
 * print_sign - to print some signs.
 * @n: is the number.
 * Return: 1 for positive numbers, 0 for 0, and -1 for negative numbers.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
