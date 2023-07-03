#include "main.h"

/**
 * _memset - is a function to fill the first n bytes of the memory area.
 * @s: pointed to n bytes of memory
 * @n:  bytes of the memory area
 * @b: constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
