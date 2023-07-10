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
	int x = 0;
	char *y;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (; str[size] != '\0'; size++)
	{
		y = malloc(size * sizeof(*str) + 1);
		if (y == 0)
		{
			return (NULL);
		}
		else
		{
			for (; x < size; x++)
			{
				y[x] = str[x];
			}
		}
	}
	return (y);
}
