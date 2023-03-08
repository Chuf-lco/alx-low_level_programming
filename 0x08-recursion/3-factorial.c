#include "main.h"

/**
 * factorial -Entry point
 * description: Return Factorial of given number
 * @n: Parameter
 * Return: Return factorial success
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	else
	{
	i = n * (n - 1);
	}

	return (i);
}
