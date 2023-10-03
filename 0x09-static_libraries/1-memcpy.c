#include "main.h"

/**
 * _memcpy -copy memory area
 * @dest: pointer to char params destination
 * @src: pointer to char params source
 * @n: size
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
