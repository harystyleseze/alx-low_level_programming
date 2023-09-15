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
	int i;
	int j;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
