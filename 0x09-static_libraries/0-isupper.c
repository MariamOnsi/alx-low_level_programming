#include "main.h"

/**
 * _isupper - is a function to print the uppercase letters
 * @c: is the variable
 * Return: 1 for uppercase letters and 0 for otherwisw.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
