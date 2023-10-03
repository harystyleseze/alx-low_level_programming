#include "main.h"
/**
 * _isalpha - entry point
 *
 * @c: c is an ascii character
 *
 * Description: check character
 *
 * Return: Returns 1 for aphabetic and 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
