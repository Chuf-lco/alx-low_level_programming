#include "main.h"

/**
 * puts_half -Entry point
 * description: Print half of a string
 * @str: String to be printed
 */

void puts_half(char *str)
{
	int i = 0;
	int n = (str[i] - 1) / 2;

	for (; i <= str[i];  i++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
