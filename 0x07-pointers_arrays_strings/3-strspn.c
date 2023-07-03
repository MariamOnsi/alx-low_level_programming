#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: Always 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0, value;

	count = 0;
	for (i = 0; s[i] !='\0'; i++)
	{
		value = 0;
		for (j = 0; accept[j] !='\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				value = 1;
			}
		}
	}
}
