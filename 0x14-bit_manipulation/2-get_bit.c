#include "main.h"

/**
 * get_bit -Entry point for value of bit function
 * @n: number
 * @index: Counter for bit
 * Return: Return bit value Success
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	a = 1UL << index;
	if (n & a)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
