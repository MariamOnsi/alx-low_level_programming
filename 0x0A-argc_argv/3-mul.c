#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - is a function to add two integers
 * @argc: the size of the string
 * @argv: the string
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x, y, z;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", z);
	}
	return (0);
}
