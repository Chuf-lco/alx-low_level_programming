#include "main.h"

/**
 *  * _isdigit -Entry point
 *   * description: Checks for a digit
 *    * @c: Parameter for digit
 *     * Return: Return 1 Success
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
