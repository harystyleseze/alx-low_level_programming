#include <stdio.h>
/**
 * main - main block
 * 
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * 
 * Return: always zero upon successful execution
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
