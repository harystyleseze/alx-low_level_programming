#include"main.h"

/**
 * get_bit - return bit value at a given index.
 * @n: number to check bits in
 * @index: index to check
 *
 * Return: value of the bit, or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check_num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check_num = n & divisor;
	if (check_num == divisor)
		return (1);
	return (0);
}
