#include <stdio.h>

/**
 * _puts - prints a string
 * @str: the variable that represents the string
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
