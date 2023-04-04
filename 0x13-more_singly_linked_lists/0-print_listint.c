#include "lists.h"
#include <stdio.h>

/**
 * print_listint -Print elements in a list
 * @h: Points to list
 * Return: Return i Success
 */

size_t print_listint(const listint_t *h)
{
	size_t i;/*node*/

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
