#include "main.h"

/**
 * puts2 -Entry point
 * description: Print characters of a string
 * @str: Character variable
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}
	for (i = 0; i < str[i]; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
