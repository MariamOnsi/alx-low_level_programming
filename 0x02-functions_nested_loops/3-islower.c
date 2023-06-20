#include "main.h"
/**
 * _islower - is a function to check the case of the letters.
 * @c: is the case of the letter.
 * Return: 1 if the alpnabets are lowercase retunr 0 for otherwise.
 */
int _islower(int c)
{
if ((c == 65 && c <= 90) || (c == 97 && c <= 122))
{
	return (1);
}
else
{
	return (0);
}
}
