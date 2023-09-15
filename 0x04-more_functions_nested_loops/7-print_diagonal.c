#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: draw a diagonal line
 * @n: number of times the '\' char is printed
 * can only use _putchar to print
 *
 * Return: void always
 */
void print_diagonal(int n)
{
	int i = 0, count;

	while (i < n && n > 0)
	{
		count = 0;
		while (count < i)
		{
			_putchar(' ');
			count++;
		}
		_putchar('\\');
		_putchar('\n');
		count++;
	}
	if (i == 0)
		_putchar('\n');
}
