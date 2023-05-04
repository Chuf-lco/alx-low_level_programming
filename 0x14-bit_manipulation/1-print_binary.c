#include "main.h"

/**
 * print_binary -Prints binary representation of a number
 * @n: Number
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int i = 0;

	while (m > 0)
	{
		if ((n & m) || i)
		{
			putchar((n & m) ? '1' : '0');
			i = 1;
		}
		m >>= 1;

	}
	if (!i)
	{
		putchar('0');
	}
}
