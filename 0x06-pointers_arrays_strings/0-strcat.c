#include <stdio.h>
#include "main.h"

/**
 * _strcat - a function to concatenates two strings.
 * @dest: the destination string
 * @src: the source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a, i;

	while (dest[a])
	{
		a++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[a] = src[i];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
