#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to head of listint_t list
 * @idx: index where new node is added, starts at 0
 * @n: integer input to be contained in node
 *
 * Return: address of new node
 * if failed, NULL
 * if not possible to add at idx, don't add new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nw, *tmp = *head;
	unsigned int nds;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->n = n;
	if (idx == 0)
	{
		nw->next = tmp;
		*head = nw;
		return (nw);
	}
	for (nds = 0; nds < (idx - 1); nds++)
	{
		if (tmp == NULL || tmp->next == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}
	nw->next = tmp->next;
	tmp->next = nw;
	return (nw);
}
