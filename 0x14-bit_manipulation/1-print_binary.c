#include "main.h"

/**
 * _pow - calculate the power (base ^ power)
 * @base: exponent base
 * @power: exponent power
 *
 * Return: calculated value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int count;

	num = 1;
	for (count = 1; count <= power; count++)
		num *= base;
	return (num);
}

/**
 * print_binary - print binary representation
 * @n: the number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check_num;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check_num = n & divisor;
		if (check_num == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
