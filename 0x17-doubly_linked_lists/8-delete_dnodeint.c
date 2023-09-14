#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index position
 * in a dlistint_t list
 *
 * @head: pointer to pointer to the head of the list
 * @index: index of node to be deleter (starts from 0)
 *
 * Return: 1, for success
 * -1, for failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;
			free(current);
			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
