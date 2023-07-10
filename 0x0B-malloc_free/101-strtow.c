#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * strtow - function that splits a string into words.
 * @str : pointer
 * Return: Char
 */

char **strtow(char *str)
{
	char **x;
	int a;
	int b = 0;
	int cont = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		if (str[a] != 32)
			cont++;
	}
	x = malloc(sizeof(char) * cont);
	if (x == NULL)
		return (NULL);

	for (a = 0 ; str[a] != '\0' ; a++)
	{
		if (str[a] != 32)
		{
			*x[b] = str[a];
			b++;
		}
		else
		{
		}
	}
	return (x);
}
