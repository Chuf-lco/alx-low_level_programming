#include "main.h"

/**
 * print_square -Entry point
 * description: Print a square
 * @size: Size of Square
 * Return: Return size Success
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
