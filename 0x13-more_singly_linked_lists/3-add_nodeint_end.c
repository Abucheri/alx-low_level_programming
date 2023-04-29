#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: pointer to first element in listint_t list
 * @n: int to be inserted into new list element
 *
 * Return: address of new element
 * if failed, NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->h = n;
	nw->next = NULL;
	if (*head == NULL)
	{
		*head = nw;
	} else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nw;
	}
	return (*head);
}
