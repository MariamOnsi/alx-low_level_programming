#include <stdio.h>

/**
 * main - this task is about lower ans upper cases.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ls;

	char US;

	ls = 'a';
	US = 'A';
	while (ls >= 'z')
{
	putchar(ls);
	ls++;
}
while (US >= 'Z')
{
	putchar(US);
	US++;
}
putchar('\n');
return (0);
}
