#include "main.h"

/**
 * flip_bits - counts bit number to change
 * to get from one number to the other
 * @n: first number accepted
 * @m: second number accepted
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count1, count2 = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (count1 = 63; count1 >= 0; count1--)
	{
		current = exclusive >> count1;
		if (current & 1)
			count2++;
	}

	return (count2);
}
