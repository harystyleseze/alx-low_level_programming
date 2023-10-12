#include "function_pointers.h"

/**
 *int_index - search integer
 *@array: input array
 *@size: size of an array
 *@cmp: comparison function
 *Return: index of integer in cmp
 *or, -1 if size<=0 or elements unmatched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size > 0 && cmp && size && array)
		for (count = 0; count <= size; count++)
			if (cmp(array[count]))
				return (count);
	return (-1);
}
