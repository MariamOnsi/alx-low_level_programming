#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @c: the string
 * Return: the string that is encoded
 */

char *leet(char *c)
{
	char *a = c;
	char n[] = {'A', 'E', 'O', 'T', 'L'};
	int d[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(n) / sizeof(char); i++)
		{
			if (*c == n[i] || *c == n[i] + 32)
			{
				*c = 48 + d[i];
			}
		}
			c++;
	}
		return (a);
}
