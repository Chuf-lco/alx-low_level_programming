#include "function_pointers.h"
#include "_putchar.c"
/**
 * print_name -Print a name
 * @name: Arguement
 * @f: Pointer
 * Return: Return 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

