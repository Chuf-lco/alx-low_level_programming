#include "main.h"

/**
 * get_endianness - Check endianness of integers
 * Return: Return 0
 */
int get_endianness(void)
{
	int i = 1;
	char *j = (char *)&i;/*Derefenrence to get first byte of i*/

	if (*j == 1)
	{
		return (1);/*little endian*/
	}
	else
	{
		return (0);/*big endian*/
	}
}
