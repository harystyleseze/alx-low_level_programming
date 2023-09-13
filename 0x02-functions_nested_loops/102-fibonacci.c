#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the first 50 Fibonacci numbers, with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	long int sum;
	long int i, j;
	int count;


	sum = 0;
	i = 0;
	j = 1;
	count = 0;

	while (count < 49)
	{
		sum = i + j;
		printf("%li, ", sum);
		i = j;
		j = sum;

		count++;
	}
	sum = i + j;
	printf("%li\n", sum);

	return (0);
}
