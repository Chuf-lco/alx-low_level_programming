#include "main.h"

/**
 * main - Entry point
 * decription: Print alphabet in lowercase
 * Return: Return 0 Success
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
