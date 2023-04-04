#include "lists.h"
/**
 * get_nodeint_at_index -Get nth node
 * @head: Pointer to list
 * @index: Index of the node
 * Return: Return node Success
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	node = head;/*points to present node*/
	if (node == NULL)
	{
		return (NULL);
	}
/*iterate through nodes*/
	for  (i = 0; i < index; i++)
	{
		node = node->next;
	}

	return (node);
}
