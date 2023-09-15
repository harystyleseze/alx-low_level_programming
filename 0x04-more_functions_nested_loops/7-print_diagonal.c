#include "main.h"

/**
 * main - entry point
 * print_diagonal - draw a diagonal line
 * @n: number of times the '\' char is printed
 * 
 * Description: Can only use _putchar to print
 *
 * Return: void always
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
}
