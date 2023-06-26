#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: converting
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int j = 0;
	int k = 1;
	int h = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			k *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
			h = 1;
			j = (j * 10) + (s[i] - '0');
			i++;
		}
		if (h == 1)
		{
			break;
		}
		i++;
	}
	j *= k;
		return (j);
}
