#include "main.h"

/**
 *  * _puts - Entry point
 *   *description: Print
 *   @s: Parameter
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
	_puts(s);
	}
}
