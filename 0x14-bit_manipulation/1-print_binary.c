#include "main.h"
/**
 * print_binary - Prints binary representation
 * @n: Number represented
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
/*Initialize mask with enough bit set*/
	m = 1UL << (sizeof(unsigned long int));
	while (m > 0)
	{
		if (n & m)/*checks if bit value is set*/
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		m >>= 1;
	}
}
