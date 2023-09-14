#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * in a dlistint_t list
 *
 * @h: pointer to a pointer to head of list
 * @idx: index at which the new node is added (starts from 0)
 * @n: val to be stored in the new node
 *
 * Return: pointer to new node
 * NULL, for failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node->prev = current;
			new_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		i++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
