#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: string
 * Return: count
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = count + _strlen_recursion(s + 1) + 1;
	}
	return (count);
}
