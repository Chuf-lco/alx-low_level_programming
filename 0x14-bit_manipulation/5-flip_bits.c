#include "main.h"

/**
 * flip_bits - Number of bits to be flipped to get to other number
 * @n: First number
 * @m: Second number
 * Return: Return number of bits Success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;/*finding XOR value of n and m*/
	unsigned int index = 0;

	while (a != 0)
	{
		index += (a & 1);
		a >>= 1;/*shift bit to right*/
	}
	return (index);
}
