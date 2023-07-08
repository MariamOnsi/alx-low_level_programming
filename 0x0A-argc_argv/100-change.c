#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main  -  a function to print the minimum number of coins
 * to make change for an amount of money.
 * @argc: the size of the string
 * @argv: the string
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;
		int leastcents = 0;
		int coins = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (coins >= cents[i])
			{
				leastcents = leastcents + coins / cents[i];
				coins = coins % cents[i];
				if (coins % cents[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
