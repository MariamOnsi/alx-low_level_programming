#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - is a function concatenate strings
 * @s1: string 1
 * @s2: string 2
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int x, y, z, h;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	y++;
	c = malloc(x * sizeof(*s1) + y * sizeof(*s2));
	if (c == 0)
		return (NULL);
	for (z = 0, h = 0; z < x + y; z++)
	{
		if (z < x)
			c[z] = s1[z];
		else
			c[z] = s2[h++];
	}
	return (c);
}
