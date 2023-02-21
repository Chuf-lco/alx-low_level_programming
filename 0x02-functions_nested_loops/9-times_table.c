#include "main.h"

/**
 * times_table -Entry point
 * description: Print the 9 times table
 * Return: Return 0 Success
 */

void times_table(void)
{
	int i;
	int j;
	int k;

	for (k = 0; k <= 81; k++)
	{
		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				k = (i * j);
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
			}
			_putchar ('\n');
		}
	}
}
