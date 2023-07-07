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
	int i, x;
	int sum = 0;
	char *e;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			e = argv[i];
			if ((e[i] >= 97 && e[i] <= 122) || (e[i] >= 65 && e[i] <= 90))
			{
				printf("Error\n");
					return (1);
			}
			else
			{
			x = atoi(e);
			sum = sum + x;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
