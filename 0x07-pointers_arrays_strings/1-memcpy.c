#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the are that will be copied
 * @src: the copy
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
