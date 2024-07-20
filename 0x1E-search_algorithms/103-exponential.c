#include "search_algos.h"

/**
 * min - Returns the minimum of two size_t values
 * @a: First value
 * @b: Second value
 *
 * Return: The smaller of `a` and `b`
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - Searches for a value in an integer
 * array using binary search
 * @array: Pointer to the first element of the array to search
 * @value: Value to search for
 * @low: Starting index
 * @high: Ending index
 *
 * Return: The index of `value` if found, or -1 if not found
 */
int binary_search_helper(int *array, int value, size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%d%s", array[i], i == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 * using exponential search
 * @array: Pointer to the first element of the array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index of `value` if found, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}

