#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index -Search or  integer
 * @array: Pointer
 * @size: Number of elements in array
 * @cmp: Pointer
 * Return: Return integer Success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0 ; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
