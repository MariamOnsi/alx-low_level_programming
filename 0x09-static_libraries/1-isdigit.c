#include "main.h"

/**
 * _isdigit - is a fuction to check if the character is a digit or not
 * @c: is the vaiable
 * Return: 1 if the variable is a digit and 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
