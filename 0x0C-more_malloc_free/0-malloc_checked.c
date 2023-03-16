#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -Entry point
 * @b: Integer
 * Return: Return pointer Success
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
