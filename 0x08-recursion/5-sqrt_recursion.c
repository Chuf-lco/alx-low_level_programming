#include "main.h"

int _abs_sqrt(int n, int i);

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
	if (n == 1)
		return (1);
	return (n / _abs_sqrt(n, 0));
}
/**
 * _abs_sqrt -Entry point
 * descrption: find square root
 * @n: parameter
 * @i: parameter
 * Return: Return squareroot Success
 */

int _abs_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_abs_sqrt(n, i + 1));
}
