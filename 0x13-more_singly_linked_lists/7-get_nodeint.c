#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to head of listint_t list
 * @index: index of node, starting at 0
 *
 * Return: the nth node of a listint_t
 * if node doesn't exist, NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nds;

	for (nds = 0; nds < index; nds++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
