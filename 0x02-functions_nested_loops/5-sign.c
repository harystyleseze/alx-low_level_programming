#include "main.h"

/**
 * print_sign - entry point
 *
 * @n: n is an ascii character
 *
 * Description: print sign of a number depending on case
 *
 * Return: Returns either 1, -1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
