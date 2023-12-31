#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block.
 * @ptr: pointer to the memory previsouly allocated
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	char *old_pt;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	pt = malloc(new_size);
	if (!pt)
		return (NULL);

	old_pt = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pt[i] = old_pt[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			pt[i] = old_pt[i];
	}

	free(ptr);
	return (pt);
}
