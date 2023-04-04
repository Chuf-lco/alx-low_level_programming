#include "lists.h"
#include <stdlib.h>

/**
 * free_listint -Function to free list
 * @head: Pointer to start of list
 */
void free_listint(listint_t *head)
{
	listint_t *i;/*traverse through list*/

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
