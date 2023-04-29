#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list
 *
 * @head: pointer to the head node of listint_t list
 *
 * Return: address to the node where loop starts
 * if no loop, NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	a = head->next;
	b = (head->next)->next;
	while (b)
	{
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (a);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (NULL);
}
