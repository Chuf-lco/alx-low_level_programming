#include "lists.h"

/**
 * listint_len - Return number of elements
 * @h: Points to the list
 * Return: Return number of elements Success
 */
size_t listint_len(const listint_t *h)
{
	size_t i; /*elements*/

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
