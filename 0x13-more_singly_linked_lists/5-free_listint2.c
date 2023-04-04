#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -Free a list
 * @head: Double pointer for first node
 */
void free_listint2(listint_t **head)
{
	listint_t *i, *next;
/*@i iterates through list @next points to next node */

	if (*head == NULL)
	{
		return;
	}
	i = *head;
	while (i != NULL)
	{
		next = i->next;
		free(i);
		i = next;
	}
	*head = NULL;
}
