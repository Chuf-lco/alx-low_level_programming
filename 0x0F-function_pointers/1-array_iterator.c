#include "function_pointers.h"
#include  <stdio.h>

/**
 * array_iterator -Execute function parameter in array
 * @array: Pointer
 * @size: Size of array
 * @action :Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
