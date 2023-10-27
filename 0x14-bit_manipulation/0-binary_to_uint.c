#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int.
 * @b: pointer to the string that contain binary number
 *
 * Return: converted number, or 0 if null
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}
	for (count = 0; b[count] != '\0'; count++)
	{
		num <<= 1;
		if (b[count] == '1')
			num += 1;
	}
	return (num);
}
