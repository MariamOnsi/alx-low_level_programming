#include <stdio.h>
/**
 * main - this task is about printing letters.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letters;

	letters = 'a';
		while (letters <= 'z')
		{
			putchar(letters);
			letters++;
		}
	putchar('\n');
		return (0);
}
