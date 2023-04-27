#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the head of the list_t list
 * @str: string to be added to the list_t list
 *
 * Return: address of the new element
 * NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *d;
	int l;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	d = strdup(str);
	if (d == NULL)
	{
		free(n);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	n->str = d;
	n->l = l;
	n->next = *head;

	*head = n;

	return (n);
}
