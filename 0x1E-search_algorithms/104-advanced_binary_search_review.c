#include "search_algos.h"

/**
 * print_array - Print array to search from
 * @array: Pointer to the first element of the array
 * @low: Starting index
 * @high: Ending index
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
		printf("%d%s", array[i], i == high ? "\n" : ", ");
}

/**
 * binary_search_recursion - Recursive helper to perform advanced binary search
 * @array: Pointer to the first element of the array
 * @value: Value to search for
 * @low: Starting index
 * @high: Ending index
 *
 * Return: Index of the first occurrence of `value`, or -1 if not found
 */
int binary_search_recursion(int *array, int value, size_t low, size_t high)
{
	size_t mid;

	if (low > high || !array)
		return (-1);

	print_array(array, low, high);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] < value)
			return (mid);
		return (binary_search_recursion(array, value, low, mid - 1));
	}
	else if (array[mid] < value)
		return (binary_search_recursion(array, value, mid + 1, high));
	else
		return (binary_search_recursion(array, value, low, mid - 1));
}

/**
 * advanced_binary - Searches for the first occurrence of
 * a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of `value`, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_search_recursion(array, value, 0, size - 1));
}

