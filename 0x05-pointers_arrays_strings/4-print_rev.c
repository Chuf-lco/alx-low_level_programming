#include "main.h"

/**
 * print_rev -Entry point
 * description: Print a string in reverse
 * @s: String variable
 */

void print_rev(char *s)
{
	int i = (&s);

	while (i != '\0')
	{
		i--;
		_putchar(i);

	}
	_putchar('\n');
}
