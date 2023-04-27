#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: list_t list
 *
 * Return: no. of nodes
 * if str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t nds = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		nds++;
		h = h->next;
	}
	return (nds);
}
