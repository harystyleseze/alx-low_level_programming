#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: c is an ascii character
 *
 *  Description: Checks for lowercase alphabet and return a value
 *
 *  Return: Returns 1 if c is lower otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
