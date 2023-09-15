#include "main.h"

/**
 * main - entry point
 *
 * Description: more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 * Return: always void
 */

void more_numbers(void)
{
	int i, counter;

	for (i = 0; i < 10; i++)
	{
		for (counter = 0; counter < 15; counter++)
		{
			if (counter >= 10)
				_putchar(counter / 10 + '0');
			_putchar(counter % 10 + '0');
		}
		_putchar('\n');
	}
}
