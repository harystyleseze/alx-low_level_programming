#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers.
 * @n: number of arguments
 * @separator: seperator between numbers
 * Return: Always void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list my_num;
	unsigned int i;

	/* initialize variable list for the number of arguments */
	va_start(my_num, n);

	/* loop through all arguments stored in the valist */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_num, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(my_num);
	printf("\n");
}
