#include "main.h"
/**
 * set_bit -Setting bit value to 1 at an index
 * @n: Number
 * @index: Counter for number
 * Return: Return 1 Success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	m = 1UL << index;/*assigning enough bit set to mask*/
	*n = *n | m;
	return (1);
}
