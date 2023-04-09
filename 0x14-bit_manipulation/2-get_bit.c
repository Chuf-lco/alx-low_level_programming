#include "main.h"

/**
 * get_bit - Get value of bit
 * @n: bit
 * @index: value of bit
 * Return: Return value Success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = 1UL << index;
	if (n & m)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
