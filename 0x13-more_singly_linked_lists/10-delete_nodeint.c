#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index -Deleting a node at index
 * @head: Double pointer to the list
 * @index: Index of node to be deleted
 * Return: Return 1 Success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *n, *h, *t;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		n = *head;/*n stores head node*/
		*head = (*head)->next;
		free(n);
		return (1);
	}
	h = *head;/*h pointer to previous node*/
	t = (*head)->next;/*t pointer to current node*/
	for (i = 1; i < index; i++)
	{
		h = t;
		t = t->next;
	}
	if (t == NULL)
	{
		return (-1);
	}
	h->next = t->next;
	free(t);
	return (1);

}
