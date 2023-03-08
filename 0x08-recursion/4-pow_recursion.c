#include "main.h"

/**
 * _pow_recursion -Entry point
 * description: Raised to the power
 * @x: parameter for value
 * @y: parameter for power
 * Return: Return result Success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
