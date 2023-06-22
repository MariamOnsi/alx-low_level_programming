#include "main.h"

/**
 * print_line - is a function to print a stright line.
 * @n: is the variable
 * Return: void.
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int times;

		for (times = 1; times <= n; times++)
		{
			_putchar('_');
		}
	}
}
