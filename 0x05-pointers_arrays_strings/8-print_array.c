#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int y = 0;

	for (; y < n; y++)
	{
		printf("%d", *(a + y));
		if (y != (n - 1))
			printf(", ");
	}
	printf("\n");
}
