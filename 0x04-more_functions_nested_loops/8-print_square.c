#include "main.h"

/**
 * print_square - entry point
 *
 * Description: prints a square, followed by a new line;
 * @size: size of the square
 *
 * Return: void always
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int count1, count2;

		for (count1 = 0; count1 < size; count1++)
		{
			for (count2 = 0; count2 < size; count2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
