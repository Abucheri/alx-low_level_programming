#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at
 * index index of a listint_t linked list
 *
 * @head: pointer to head of listint_t list
 * @index: index of node to be deleted, nstarts at 0
 *
 * Return: if success 1
 * if failed, -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *curr = NULL;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (x < index - 1)
	{
		if (tmp == NULL || (tmp->next) == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
		x++;
	}
	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);
	return (1);
}
