#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index -Insert node at a given position
 * @head: Double pointer to a list
 * @idx: Index of a list
 * @n: Integer
 * Return: Return node address Success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;/*node to be added*/

	if (*head == NULL)
	{
		return (NULL);
	}

	if (idx == 0 && idx != '\0')
	{
		node = malloc(sizeof(listint_t));
		if (node == NULL)/*if adding new node is not possible*/
		{
			return (NULL);
		}
		node->n = n;
		node->next = *head;
		*head = node;
	}
	return (node);
}
