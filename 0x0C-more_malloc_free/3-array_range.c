#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: input 1
 * @max: input 2
 * Return: NULL if min is bigger or malloc fails
 */
int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
		return (NULL);

	j = max - min + 1;
	p = malloc(sizeof(int) * j);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		a[i] = min;
	}

	return (p);
}
