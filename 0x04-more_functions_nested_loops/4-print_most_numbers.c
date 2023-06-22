#include "main.h"

/**
 * print_most_numbers - is a function to print numbers from 0-9.
 * @digit: is the variable 
 * Return: void
 */

void print_most_numbers(void)
{
	int digit;

	for (digit =0; digit <= 9; digit++)
	{
		if (digit != 2 && digit != 4)
		{
			_putchar(digit + '0');
		}
		_putchar('\n');
	}
}
