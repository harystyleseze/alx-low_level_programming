#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a given function passed.
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (!array || !action)
		return;

	for (count = 0; count < size; count++)
		action(array[count]);
}
