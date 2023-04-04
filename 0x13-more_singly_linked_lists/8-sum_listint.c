#include "lists.h"

/**
 * sum_listint -Calculate sum of all data
 * @head: Pointer to data
 * Return: Return sum Success
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
