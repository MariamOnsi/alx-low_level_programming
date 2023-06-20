#include "main.h"
/**
 *  _isalpha - is the function to print letters.
 *  @c: id the variable.
 *  Return: 1 for lower case and 0 for otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
