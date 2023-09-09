#include <stdio.h>
/**
 * main - main block
 *
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 *
 * Return: 0
 */
int main(void)
{
	char l = 'a';
	char U = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	while (U <= 'Z')
	{
		putchar(U);
		U++;
	}
	putchar('\n');
	return (0);
}
