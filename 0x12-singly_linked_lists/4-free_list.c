#include "lists.h"
#include <stdlib.h>

/**
 * free_list -Entry point to free a list
 * @head: Pointer to first node
 */
void free_list(list_t *head)
{
	list_t i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i->str);
		free(i);
	}
}
