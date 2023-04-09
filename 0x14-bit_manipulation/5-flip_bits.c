#include "main.h"

/**
 * flip_bits - Flipping bits to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: Return number of bits Success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k, i = 0;

	k = n ^ m;/*use of XOR operator to initialize k*/
	while (k != 0)
	{
/*Brian Kernighan's algorithm to turn off the rightmost bit in k*/
		k &= (k - 1);
		i++;
	}
	return (i);
}
