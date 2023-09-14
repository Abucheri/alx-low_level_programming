#include "lists.h"

/**
 * dlistint_len - returns no. of elements in a dlistint_t list
 *
 * @h: pointer to head of list
 *
 * Return: no. of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t countNodes = 0;

	while (h != NULL)
	{
		countNodes++;
		h = h->next;
	}
	return (countNodes);
}
