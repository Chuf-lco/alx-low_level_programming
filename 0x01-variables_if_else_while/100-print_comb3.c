#include <stdio.h>

/**
 * main -Entry point
 * Description: Print combination of two digits
 * Return: Return 0 Success
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; i++)
		{
			putchar(ij);
			if (i != j)
			{
				putchar(',');
				putchar(' ');
			}
			if (i < j)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
