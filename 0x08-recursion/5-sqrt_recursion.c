#include "main.h"

/**
 * power_function - returns natural square root of a number.
 * @n: input number.
 * @i: iterator.
 * Return: square root or -1.
 */
int power_function(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + power_function(n, i + 1));
}
/**
 * _sqrt_recursion - returns natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_function(n, 2));
}
