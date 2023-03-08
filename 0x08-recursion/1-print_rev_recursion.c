#include "main.h"

/**
 * _print_rev_recursion -Entry point
 * description: print string in reverse
 * @s: Pointer parameter
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
		break;
	}
}
