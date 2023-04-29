#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: pointer to first element in listint_t list
 *
 * Return: head node's data
 * if empty, 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nm;

	if (head == NULL || *head ==  NULL)
	{
		return (0);
	}
	nm = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (nm);
}
