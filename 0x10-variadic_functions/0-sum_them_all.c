#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -Entry point
 * @n: Number of values
 * Return: Return sum Success
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list args;
	va_start(args, n);/*Initialize argument list*/

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);/*Get next argument value*/
	}
	va_end(args);/*Clean up*/
	return (sum);
}
