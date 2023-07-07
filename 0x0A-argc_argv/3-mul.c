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
	int x, y;

	if (argc > 1)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
