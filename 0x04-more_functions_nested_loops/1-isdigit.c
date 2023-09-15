#include "main.h"

/**
 * _isdigit - entry point
 *
 * _isdigit - Check for digits (0 through 9)
 * @c: int type param
 * 
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
i	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
