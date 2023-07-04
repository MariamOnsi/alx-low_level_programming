#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals matrix
 * @a: the square matrix
 * @size: the size of the matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[i];
			}
		}
	}
	printf("%d", sum);

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (i == (size - j - 1))
				{
					sum1 = sum1 + a[j];
				}
			}
		}
	printf("%d", sum1);
}
