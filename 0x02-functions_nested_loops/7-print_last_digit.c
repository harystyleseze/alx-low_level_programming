#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @n: n is an integer
 * 
 * Description: prints the last digit of a number
 * 
 * Return: integer
 */

int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (n < 0)
		lastDigit = lastDigit * -1;
	_putchar(lastDigit + '0');

	return (lastDigit);
}
