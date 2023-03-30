#include "lists.h"

/**
 * list_len -Entry point to find the length of a string
 * @h: Pointer to the string
 * Return: Return Number of elements Success
 */
size_t list_len(const list_t *h)
{
	size_t i = 0; /*counter*/

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
