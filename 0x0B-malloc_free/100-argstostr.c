#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - prints args
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int count = 0, x = 0, y = 0, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (x < ac)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			count++;
			y++;
		}
		x++;
	}
	count = count + ac + 1;
	s = malloc(sizeof(char) * count);
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
		s[z] = av[x][y];
		z++;
		}
	s[z] = '\n';
	z++;
	}
	return (s);
}

