#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * decription: Print alphabet in lowercase 10 times
 * Return: Return 0 Success
 */

void print_alphabet_x10(void)
{
	int x;
	char ch;

	for (x = 1; x <= 10; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
