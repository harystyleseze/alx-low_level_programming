#include <stdio.h>
/**
 * main - main block
 *
 * Description: print all single digit
 * number less than ten
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
