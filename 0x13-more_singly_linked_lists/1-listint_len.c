#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: pointer to listint_t list to traverse
 *
 * Return: no. of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		nds++;
		h = h->next;
	}
	return (nds);
}
