#include "main.h"
#include <stdlib.h>
/**
 * array_range -Array of Integers
 * @min: least int
 * @max: largest int
 * Return: Return pointer Success
 */
int *array_range(int min, int max)
{
	int *arr, i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(len * sizeof(int));
	if (!arr)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
