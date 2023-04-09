#include "main.h"
/**
 * binary_to_uint -Convert binary to number
 * @b: Pointer to string
 * Return: Return Converted string Success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, c_number = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			c_number <<= 1;/*Shift result to left by 1 bit*/
		
/*add binary value of current character to c_number*/
			c_number += (b[i] - '0');
		}
		else
		{
			return (0);
		}

	}
	return (c_number);
}
