#include "main.h"

/**
 * swap_int - function that swap values
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
