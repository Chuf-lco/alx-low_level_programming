#include <stdio.h>

/**
 * main - entry point
 * description: Print all hexadecimal numbers
 * Return: Return 0 Success
 */

int main(void)
{
	char n;

	char m;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}

	for (m = 'a'; m <= 'f'; m++)
	{
		putchar((m % 6 + '0'));
	}
	putchar('\n');
	return (0);
}
