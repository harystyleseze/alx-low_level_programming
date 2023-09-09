#include <stdio.h>
/**
 * main - main block
 * 
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * 
 * Return: zero always
 */
int main(void)
{
	int x;
	char c;

	for (x = 0; x < 10; x++)
	{
		putchar(x);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
