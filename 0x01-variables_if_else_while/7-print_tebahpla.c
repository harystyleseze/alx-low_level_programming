#include <stdio.h>
/**
 * main - main block
 *
 * Description: Print the alphabet in reverse order in lowercase.
 *
 * Return: always zero upon successful execution
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
