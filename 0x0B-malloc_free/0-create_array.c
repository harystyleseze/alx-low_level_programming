#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of characters and initialize them
 * @c: specific char
 * @size: array size
 * Description: create an array of chars
 * Return: memory address of char pointer assigned
 * from malloc, or NULL if unsuccessful
 */
char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *array;

	if (size == 0 || array == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		array[count] = c;

	return (array);
}
