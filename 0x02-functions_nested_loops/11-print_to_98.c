#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - is a function to print all nautral numbers.
 * @n: is the variable.
 * Return: n
 */
void print_to_98(int n)
{
	int digit;

	if (n > 98)
		for (digit = n; digit > 98; digit--)
			printf("%d, ", digit);
	else
		for (digit = n; digit < 98; digit++)
			printf("%d, ", digit);
				printf("98\n");
}
