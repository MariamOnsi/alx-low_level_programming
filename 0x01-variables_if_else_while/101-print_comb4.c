#include <stdio.h>
/**
 * main - task number 11
 * Return: Always 0 (Success)
 */

int main(void)
	#include <stdio.h>
{
int Numb, Numb1, Numb2;
for (Numb = 48; Numb < 58; Numb++)
{
for (Numb1 = 49; Numb1 < 58; Numb1++)
{
for (Numb2 = 50; Numb2 < 58; Numb2++)
{
if (Numb2 > Numb1 && Numb1 > Numb)
{
putchar(Numb);
putchar(Numb1);
putchar(Numb2);
if (Numb != 55 || Numb1 != 56)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
