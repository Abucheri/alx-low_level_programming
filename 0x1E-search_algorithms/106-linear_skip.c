#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located,
 * or NULL if not found.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *express;

	if (list == NULL)
		return (NULL);
	express = list->express;
	for (; express; list = express, express = express->express)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n >= value || !express->express)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			list->index, express->index);
	for (node = list; node; node = node->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
		if (node->n > value)
			return (NULL);
	}
	return (NULL);
}
