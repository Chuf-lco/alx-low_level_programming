#include "main.h"

/**
 * clear_bit - Sets value of bit to 0
 * @n: Pointer to the value
 * @index: Index of values
 * Return: Return 1 Success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = *n & ~(1UL << index);

	return (1);
}
