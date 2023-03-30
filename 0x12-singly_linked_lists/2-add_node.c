#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 *add_node -Entry point for a new node
* @head: pointer to first node
* @str: Pointer to string
* Return: Return Address of new node Success
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;/*declaring new node */

	h = malloc(sizeof(list_t));/*allocate memory to h*/
	if (h == NULL)
	{
		return (NULL);
	}
	h->str = strdup(str);/*Duplicating and storing the string*/
	if (h->str == NULL)
	{
		free(h);
		return (NULL);
	}
/*set string length and next pointer*/
	h->len = strlen(str);
	h->next = *head;
	/*update head to point to h*/
	*head = h;
	return (h);
}
