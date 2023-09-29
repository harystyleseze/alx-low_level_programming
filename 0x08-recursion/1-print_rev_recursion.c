#include "main.h"

/**
 * _print_rev_recursion - reverse string followed by new line
 * @s: string
 * Return: null
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
