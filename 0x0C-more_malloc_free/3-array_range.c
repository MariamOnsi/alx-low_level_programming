#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *  array_range -  a function that creates an array of integers
 * @min: int type
 * @max: int type
 * Return:  return pointer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int a;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (min <= max)
	{
		p[a] = min;
		min++;
		a++;
	}
	return (p);
}
