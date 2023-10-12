#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - return sum of of all arguments passed
* @n: integers to add
* Return: sum, or 0 when n is zero
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, count;

	va_list pta;

	if (n == 0)
		return (0);
	va_start(pta, n);

	for (count = 0; count < n; count++)
		sum += va_arg(pta, int);
	va_end(pta);

	return (sum);
}
