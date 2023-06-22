#include "main.h"

/**
 * print_line - is a function to print a straight kine
 * @n: is the variable
 * Return: void
 */

void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
