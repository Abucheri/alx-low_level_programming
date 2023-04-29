#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: pointer to head of listint_t list to be reversed
 *
 * Return: pointer to 1st node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *hd, *lhd;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}
	lhd = NULL;
	while ((*head)->next != NULL)
	{
		hd = (*head)->next;
		(*head)->next = lhd;
		lhd = *head;
		*head = hd;
	}
	(*head)->next = lhd;
	return (*head);
}
