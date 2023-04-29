#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: pointer to head of listint_t list
 *
 * Return: sum of all the data (n) of a listint_t
 * if empty, 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
