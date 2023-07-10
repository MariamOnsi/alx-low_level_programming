#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates 2D array of ints
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: pointer to 2D array or NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int x, y;
	
	if (width < 1 || height < 1)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);
		if (a[x] == NULL)
		{
			for (--x; x >= 0; x--)
				free(a[x]);
			free(a);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			a[x][y] = 0;
	return (a);
}
