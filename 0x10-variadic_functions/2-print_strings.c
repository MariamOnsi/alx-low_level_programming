#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *str;
	unsigned int element;

	va_start(s, n);

	for (element = 0; element < n; element++)
	{
		str = va_arg(s, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (element != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}
