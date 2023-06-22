#include "main.h"

/**
 * print_most_numbers - is a function to print numbers from 0-9
 * Return: void
 */

void print_most_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		if (!(n == 2 || n == 4))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
