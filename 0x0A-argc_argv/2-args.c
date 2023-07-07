#include <stdio.h>
#include "main.h"

/**
 * main - is a function to print the command line argument
 * @argc: the size of the array
 * @argv: is the array
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
