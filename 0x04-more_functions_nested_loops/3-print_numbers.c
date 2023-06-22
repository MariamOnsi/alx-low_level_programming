#include "main.h"

/**
 * print_numbers - is a function to print the numbers from 0 -9.
 * Return: void.
 */

void print_numbers(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar(digit + '0');
	}
	_putchar('\n');
}
