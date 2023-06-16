#include <stdio.h>
/**
 * main - this task is about execption in letters.
 * Return: Always 0 (Success)
 */

int main(void)
{
int Numb, Numb1;
for (Numb = 48; Numb <= 56; Numb++)
{
for (Numb1 = 49; Numb1 <= 57; Numb1++)
{
if (Numb1 > Numb)
{
putchar(Numb);
putchar(Numb1);
if (Numb != 56 || Numb1 != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
