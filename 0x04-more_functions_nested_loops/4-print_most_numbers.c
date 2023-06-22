#include "main.h"

/**
 * print_most_numbers - is a function to print numbers from 0-9.
 * _putchar -  is a function to print the numbers
 * Return: void
 */

void print_most_numbers(void)
void _putchar(void)
{
	char digit;

	for (digit = 0; digit <= 9; digit++)
	{
		if (!(digit == 0 || digit == 4))
			_putchar(digit);
	}
	_putchar('\n');
}
