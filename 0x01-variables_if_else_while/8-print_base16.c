#include <stdio.h>
/**
 * main - this task is about execption in letters.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ls;

	for (ls = 'z'; ls >= 'a'; ls--)
		putchar(ls);
	putchar('\n');
	return (0);
}
