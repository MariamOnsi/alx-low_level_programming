#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: resepresents the number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list my_numbs;
	unsigned int count;
	int total;

	if (n == 0)
		return (0);
	total = 0;

	/* init valist for the number of arguments */
	va_start(my_numbs, n);

	/* loop through/access all arguments stored in the valist */
	for (count = 0; count < n; count++)
		total += va_arg(my_numbs, int);
	va_end(my_numbs);
	return (total);
}
