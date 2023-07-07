#include <stdio.h>
#include "main.h"

/**
 * main - is a function to print the number of the argument
 * @argc: number of argument
 * @argv: the string
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
