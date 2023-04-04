#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Deletes head node
 * @head: Double pointer to head node
 * Return: Return data Success
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *i;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	i = *head;
	*head = (*head)->next;
	free(i);

	return (data);
}
