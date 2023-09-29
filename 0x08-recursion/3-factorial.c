#include "main.h"

/**
 * factorial - returns factorial
 * @n: input integer
 * Return: factorial of the given number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
