#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: Prints alphabets in lowercase
 *
 * Return: Always returns void (nothing)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
