#include "main.h"
/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */
void reverse_array(int *a, int n)
{
	int tempt, count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		tempt = a[count];
		a[count++] = a[n];
		a[n--] = tempt;
	}
}
