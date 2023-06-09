#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: pointer to the head of the list_t list
 *
 * Return: no. of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nds = 0;

	while (h)
	{
		nds++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nds);
}
