#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *  main - is the function
 *  @argc: string size
 *  @argv: string
 *  Return: Always 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *e;

	while (--argc)
	{
		for (e = argc[argv]; *e; e++)
		{
			if (*e < '0' || *e > '9')
			{
				return (printf("Error\n"), 1);
			}
		       sum = sum + atoi(argv[argc]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
