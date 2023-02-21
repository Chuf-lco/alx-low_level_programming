#include "main.h"

/**
 * main - Entry point
 * decription: Print alphabet in lowercase
 * Return: Return 0 Success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	print_aplhabet();
	return (0);
}
