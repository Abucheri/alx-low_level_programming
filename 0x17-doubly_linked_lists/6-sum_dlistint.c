#include "lists.h"

/**
 * sum_dlistint - returns sum of all data (n) of a dlistint_t linked list
 *
 * @head: pointer to head of the list
 *
 * Return: summ of all data in the list
 * 0, if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
