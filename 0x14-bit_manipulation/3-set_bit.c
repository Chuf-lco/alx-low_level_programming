#include "main.h"
/**
 * set_bit -Sets value of bit at a given index
 * @n: Pointer to the value
 * @index: Index of values
 * Return: Return 1 Success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	index = 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = 1UL << index;/*Initialize mask with enough bit set*/
	*n = *n | m;
	return (1);
}
