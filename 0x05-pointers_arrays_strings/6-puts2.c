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
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
