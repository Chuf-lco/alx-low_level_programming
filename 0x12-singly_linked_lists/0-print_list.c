#include "lists.h"
#include <stdio.h>

/**
 * print_list -PRint elements in a list
 * @h: Pointer to the list
 * Return: Return variables Success
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		i++;
		h = h->next;
	}

	return (i);
}
