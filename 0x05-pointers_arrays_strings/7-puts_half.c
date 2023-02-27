#include "main.h"

/**
 * puts_half -Entry point
 * description: Print half of a string
 * @str: String to be printed
 */

void puts_half(char *str)
{
	int i = 0;

	for (; *str != '\0';  str++)
	{
		i++;
	}
	str -= (i / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
