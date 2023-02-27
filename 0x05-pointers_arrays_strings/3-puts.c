#include "main.h"

/**
 * _puts -Entry point
 * description: Print a string
 * @str: Parameter string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
