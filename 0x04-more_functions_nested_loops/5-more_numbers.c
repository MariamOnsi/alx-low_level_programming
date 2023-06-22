#include "main.h"

/**
 * more_numbers - a function to print 10 times.
 * Return: void
 */

void more_numbers(void)
{
	int num;
	int line;

	for (line = 1; line <= 10; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar('1');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
