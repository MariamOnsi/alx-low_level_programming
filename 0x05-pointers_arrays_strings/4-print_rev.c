#include <stdio.h>

/**
 * print_rev -  prints a string, in reverse
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (i -= 1; i >= 0; i--)
		{
			putchar(s[i]);
		}
		putchar('\n');
	}
}
