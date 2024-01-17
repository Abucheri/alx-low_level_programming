#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 * the Interpolation search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL)
		return (-1);
	for (low = 0, high = size - 1; high >= low;)
	{
		pos = low + (((double)(high - low)
					/ (array[high] - array[low]))
				* (value - array[low]));
		if (pos < size)
			printf("Value checked arr[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked arr[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
