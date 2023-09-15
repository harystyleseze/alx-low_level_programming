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
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int count1, count2;

		for (count1 = 0; count1 < n; count1++)
		{
			for (count2 = 0; count2 < n; count2++)
			{
				if (count2 == count1)
					_putchar('\\');
				else if (count2 < count1)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
