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
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = (char  *) malloc(size * sizeof(char));

	if (arr == 0)
	{
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
