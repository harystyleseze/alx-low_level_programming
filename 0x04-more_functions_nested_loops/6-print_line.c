#include "main.h"

/**
 * main - entry point
 *
 * Description: print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: void always upon success
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int counter;

		for (counter = 1; counter <= n; counter++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
