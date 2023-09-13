#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints 10 times the alphabet in lowercase
 *
 * Return: Always void (Nothing)
 */

void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	_putchar('\n');
	}
}
