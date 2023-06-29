#include "main.h"

/**
 * reverse_array - a function that reverses
 * the content of an array of integers.
 * @a: the array
 * @n: number of integers.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = n - 1; i >= n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
