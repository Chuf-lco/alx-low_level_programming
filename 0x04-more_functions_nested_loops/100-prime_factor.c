#include <stdio.h>

/**
 * main -Entry point
 * description: prime factor
 * Return: Return 0 Success
 */

int main(void)
{
	long int i, j;

	i = 612852475143;

	for (j = 2; j <= i; i++)
	{
		if (i % j == 0)
		{
			i /= j;
			j--;
		}
	}
	printf("%lu\n", j);
	return (0);
}
