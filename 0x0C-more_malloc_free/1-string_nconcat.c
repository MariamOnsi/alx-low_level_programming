#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: variable
 * Return: NULL if the function failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x, y;
	int sign = n;
	int l1, l2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (sign >= l2)
	{
		sign = l2;
		p = malloc(sizeof(char) * (l1 + l2 + 1));
	}
	else
	{
		p = malloc(sizeof(char) * (l1 + n + 1));
	}
		if (p == NULL)
			return (NULL);
		for (x = 0; x < l1; x++)
		{
			p[x] = s1[x];
		}
		for (y = 0; y < sign; y++)
		{
			p[x++] = s2[y];
		}
		p[x++] = '\0';
		return (p);
}
