#include "search_algos.h"

int advanced_binary_recursive(int *array, size_t low, size_t high, int value);

/**
 * advanced_binary_recursive - Recursive helper function for advanced_binary.
 *
 * @array: Pointer to the first element of the array to search in.
 * @low: Lower bound index.
 * @high: Upper bound index.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */

int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low <= high)
	{
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i <= high; i++)
			printf(", %d", array[i]);
		printf("\n");
		mid = (low + high) / 2;
		if (array[mid] == value && (mid == low || array[mid - 1] != value))
			return (mid);
		else if (array[mid] < value)
			return (advanced_binary_recursive(array, mid + 1, high, value));
		else
			return (advanced_binary_recursive(array, low, mid, value));
	}
	return (-1); /* Not found */
}

/**
 * advanced_binary - Searches for a value in a sorted array using
 * the Advanced Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
