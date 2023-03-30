#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end -Entry point add new node at end of the list
 * @head: Pointer to the head
 * @str: Pointer to the string
 * Return: Return last node Success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h, *l; /*Declaring new node and a last node*/

	if (head == NULL)
	{
		return (NULL);
	}
	h = malloc(sizeof(list_t));
	if (h == NULL)
	{
		return (NULL);
	}
	h->str = strdup(str);
	if (h->str == NULL)
	{
		free(h);
		return (NULL);
	}
	h->next = NULL;
	if (*head == NULL)
	{
		*head = h;
	}
	else
	{
		l = *head;
		while (l->next != NULL)
		{
			l = l->next;
		}
		l->next = h;
	}
	return (h);
}
