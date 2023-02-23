#include "main.h"

/**
 * print_line -Entry point
 * description: Draw straight line
 * @n: Number of line characters
 * Return: Return n success
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
