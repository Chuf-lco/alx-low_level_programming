#include <stdio.h>

/**
 * main - entry point
 * description: Print all hexadecimal numbers
 * Return: Return 0 Success
 */

int main(void)
{
	int n;

	char m;

	for (n = 0; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}

	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
