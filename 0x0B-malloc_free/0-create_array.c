#include "main.h"
#include <stdlib.h>

/**
 * create_array - is a function
 * @size: the size of the array
 * @c:intialization
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
	{
	return (0);
	}
while (size--)
x[size] = c;
return (x);
}
