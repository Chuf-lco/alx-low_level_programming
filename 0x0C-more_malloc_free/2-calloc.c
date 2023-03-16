#include "main.h"
#include <stdlib.h>
/**
 * _calloc -Entry point
 * @nmemb: Number of values
 * @size: length of array
 * Return: Return pointer Success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr, *m_arr;
	unsigned int t_size, i;

	t_size  = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(t_size);
	if (!arr)
		return (NULL);
	m_arr = arr;
	for (i = 0; i < t_size; i++)
	{
		m_arr[i] = 0; /*initialize memory to 0*/
	}
	return (arr);
}
