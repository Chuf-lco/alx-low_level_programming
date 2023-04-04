#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint -Adding a new node
 * @head: Points to head pointer
 * @n: Number of nodes
 * Return: Return address Success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;/*added node*/

	if (head == NULL)
	{
		return (NULL);
	}
	h = malloc(sizeof(listint_t));
	if (h == NULL)
	{
		return (NULL);
	}
	h->n = n;
	h->next = *head;
	*head = h;

	return (h);
}
