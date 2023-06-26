#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: the first integer to be swaped.
 * @b: the second integer to be swaped.
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
