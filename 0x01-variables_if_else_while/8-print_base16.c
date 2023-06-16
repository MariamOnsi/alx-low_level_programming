#include <stdio.h>
/**
 * main - this task is about execption in letters.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int z;

	char lower;

	for (z = '0'; z <= '9'; z++)
		putchar(z);

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);
	putchar('\n');
	return (0);
}
