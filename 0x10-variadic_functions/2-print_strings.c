#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings,the a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed.
 * @...: A variable number of strings to be printed.
 *
 * Description: Don't print if separator is NULL.
 * print nil if one of the strings is  NULL.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int count;

	va_start(strings, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
