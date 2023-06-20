#include "main.h"
/**
 * print_last_digit - is a function to print the last digit of a number.
 * @count: is the is the number %10
 * Return: the last digit number
 */
int print_last_digit(int count)
{
int last;
last = count % 10;
if (last < 0)
{
	last = last * -1;
}
_putchar(last + '0');
return (last);
}
