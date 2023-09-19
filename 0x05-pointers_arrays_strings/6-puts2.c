#include "main.h"

/**
 * puts2 - print strings of character
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int put;

	put = 0;
	while (str[put] != '\0')
	{
		if (put % 2 == 0)
			_putchar(str[put]);
		put++;
	}
	_putchar('\n');
}
