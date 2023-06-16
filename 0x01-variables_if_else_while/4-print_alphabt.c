#include <stdio.h>
/**
 * main - this task is about execption in letters.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ls, e, q;

	e = 'e';
	q = 'q';

	for (ls = 'a'; ls <= 'z'; ls++)
	{
		if (ls != e && ls != q)
			putchar(ls);
	}
	putchar('\n');
	return (0);
}
