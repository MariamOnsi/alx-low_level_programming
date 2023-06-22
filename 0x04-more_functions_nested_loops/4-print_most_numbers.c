#include "main.h"

/**
 * print_most_numbers - is a function to print numbers from 0-9
 * Return: void
 */

void print_most_numbers(void)
{
	char n;

	for (n = 48; n <= 57; n++)
	{
		if (!(n == 50 || n == 52))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
