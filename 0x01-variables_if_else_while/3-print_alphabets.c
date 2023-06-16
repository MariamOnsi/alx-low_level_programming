#include <stdio.h>

/**
 * main - this task is about lower ans upper cases.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
		putchar(ls);
	for (ls = 'A'; ls <= 'Z'; ls++)
		putchar(ls);
	putchar('\n');
return (0);
}
