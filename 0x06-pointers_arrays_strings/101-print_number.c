#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m, d, counter;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	counter = 1;

	while (d > 9)
	{
		d /= 10;
		counter *= 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((m / counter) % 10) + 48);
	}
}
