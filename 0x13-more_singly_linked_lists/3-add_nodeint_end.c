#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -Add new node at end of list
 * @head: Pointer to head pointer
 * @n: Integer
 * Return: Return new node Success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t, *i;
/*@t is node to be added, @i is to traverse list(iterate through list)*/

	if (head == NULL)
	{
		return (NULL);
	}

	t = malloc(sizeof(listint_t));
	if (t == NULL)
	{
		return (NULL);
	}

	t->n = n;
	t->next = NULL;

	if (*head == NULL)
	{
		*head = t;
	}
	else
	{
		i = *head;
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = t;
	}
	return (t);
}
