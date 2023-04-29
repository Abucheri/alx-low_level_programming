#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t loop_list_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * loop_list_len - counts no. of unique nodes
 * in listint_t list
 *
 * @head: pointer to head of listint_t list
 *
 * Return: 0 if not looped
 * if looped, no. of unique nodes present
 */

size_t loop_list_len(const listint_t *head)
{
	const listint_t *a, *b;
	size_t nds = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
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
				nds++;
				a = a->next;
				b = b->next;
			}
			a = a->next;
			while (a != b)
			{
				nds++;
				a = a->next;
			}
			return (nds);
		}
		a = a->next;
		b = (b->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 *
 * @head: pointer to the head of listint_t list
 *
 * Return: no. of nodes in the list
 * if fails, exit with status 98
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nds, x = 0;

	nds = loop_list_len(head);
	if (nds == 0)
	{
		for (; head != NULL; nds++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	} else
	{
		for (x = 0; x < nds; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nds);
}
