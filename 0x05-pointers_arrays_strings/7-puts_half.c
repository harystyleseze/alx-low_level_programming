#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 *
 * Return: always 0
 */

void puts_half(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; y++)
		;
	y++;
	for (y /= 2; str[y] != '\0'; y++)
	{
		_putchar(str[y]);

	}
	_putchar('\n');
}
