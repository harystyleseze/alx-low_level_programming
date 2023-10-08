#include <stdlib.h>
#include "main.h"

/**
  * _calloc - allocates memory of an array.
  * @nmemb: number of elements in array.
  * @size: size of elements of array.
  * Return: NULL if size or nmemb is 0
  * or malloc fails.
  * Pointer to memory allocated if successful.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < (nmemb * size); count++)
	{
		*((char *)(p) + count) = 0;
	}

	return (p);
}
