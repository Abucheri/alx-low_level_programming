#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to the head of the list_t list
 * @str: string to be added to list_t list and duplicated
 *
 * Return: address of the new element
 * if failed, NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *d;
	unsigned int len;
	list_t *new, *l;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	d = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
	{
		len++;
	}
	new->str = d;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	} else
	{
		l = *head;
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = new;
	}
	return (*head);
}
