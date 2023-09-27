#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: input pointer.
 * @size: size of the matrix
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i, diagonal_sum1 = 0, diagonal_sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			diagonal_sum1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			diagonal_sum2 += *(a + i);
	}
	printf("%d, %d\n", diagonal_sum1, diagonal_sum2);
}
