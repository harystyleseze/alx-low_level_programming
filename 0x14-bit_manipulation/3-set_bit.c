#include "main.h"

/**
 * set_bit - set bit value to 1 at a given index.
 * @n: number to set to
 * @index: index to set bit to
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bit_val;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set_bit_val = 1 << index;
	*n = *n | set_bit_val;
	return (1);
}
