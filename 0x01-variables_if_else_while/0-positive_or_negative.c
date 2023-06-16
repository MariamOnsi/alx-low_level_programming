#include <stdlib.h>
#include <time.h>
/**
 * main - this task is about if_else
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n");
	}
	if (n == 0)
	{
		printf("%d is zero\n");
	}
	else
	{
		printf("%d is negative");
	}
	return (0);
}
