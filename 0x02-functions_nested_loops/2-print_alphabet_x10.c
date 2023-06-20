#include "main.h"
/**
 * main - task number 2 to pritn the letters 10 times.
 * print_alphabet_x10 - to print the alphabetical order 10 times.
 * @ alphabetical order: to be printed 10 times.
 * Return: Always void (Success)
 */
void print_alphabet_x10(void)
{
	int j = 0;

	char i;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar(j);
	}
	_putchar('\n');
}

