#include "main.h"
#include <stdio.h>

/**
 * main -  is a function to print the name of the file
 * @argv: is the string that contains the name
 * @argc: the size of the string
 * Return: Always (0) success.
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
