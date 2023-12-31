#include <stdio.h>
#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: number bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
