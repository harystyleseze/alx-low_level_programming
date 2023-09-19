#include "main.h"

/**
 * _puts - function that prints string
 * @str: string
 * 
 * Return: void
 */

void _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');
}
