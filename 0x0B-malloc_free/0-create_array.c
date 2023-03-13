#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -Entry point
 * @size :length of array
 * @c: Parameter
 * Return: Return array Success
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char  *) malloc(size * sizeof(char));

	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
