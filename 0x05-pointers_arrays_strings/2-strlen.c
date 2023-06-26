#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: is the variable that represents the length of the string.
 * Return: l the length of the string.
 */

size_t _strlen(const char *s)
{
	size_t l = 0;

	while (*s++)
		l++;
	return (l);
}
