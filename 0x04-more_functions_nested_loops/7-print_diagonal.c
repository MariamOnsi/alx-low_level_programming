#include "main.h"

/**
 * print_diagonal - is a function to print some characters.
 * @n: is the variable
 * Return: void.
 */

void print_diagonal(int n)
{
	int line;
	int dot;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= n; line++)
		{
			for (dot = 1; dot <= line; dot++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
