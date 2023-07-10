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
	int x = 0, y = 1;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[y])
	{
		y++;
	}
		c = malloc((sizeof(char) * y) + 1);
		if (c == NULL)
			return (NULL);
		while (x < y)
		{
			c[x] = str[x];
			c++;
		}
		c[x] = '\0';
	return (c);
}
