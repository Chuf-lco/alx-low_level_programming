#include "main.h"

/**
 * _sqrt_recursion -Entry point
 * description: Natural squareroot of a number
 * @n: Number
 * Return: Return squareroot Success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (n / _sqrt_recursion(n));
}
