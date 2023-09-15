#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 * 
 * Description: prints a triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int count1, count2;

		for (count1 = 1; count1 <= size; count1++)
		{
			for (count2 = count1; count2 < size; count2++)
			{
				_putchar(' ');
			}

			for (count2 = 1; count2 <= count1; count2++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
