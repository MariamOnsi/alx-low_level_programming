#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: array
 * @size: size of the array
 * Return: null if the size is zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (x < nmemb * size)
	{
		p[x] = 0;
		x++;
	}
	return (p);
}
