#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to address of the head node of listint_t list
 * @n: int contained in the new node
 *
 * Return: address of new element
 * if it fails, NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->n = n;
	nw->next = *head;
	*head = nw;
	return (nw);
}
