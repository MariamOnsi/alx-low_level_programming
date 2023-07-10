#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - is the function
 * @str: string
 * Return: char
 */

char *_strdup(char *str)
{
	int size = 0;
	char *p, *q;

	if (str == NULL)
		return (NULL);
	p = str;
	while (*p++)
		size++;
	q = malloc(size + 1);
	if (q == NULL)
		return (NULL);
	p = q;
	while (*str)
		*p++ = *str++;
	*p = 0;
	return (q);
}
