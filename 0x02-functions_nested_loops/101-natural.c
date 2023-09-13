#include <stdio.h>

/**
 * main - entry point
 *
 * Description: list all natural numbers
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
