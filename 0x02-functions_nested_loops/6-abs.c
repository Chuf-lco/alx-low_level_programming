#include "main.h"

/**
 * _abs -Entry point
 * description: Absolute value
 * @i: Absolute value of an integer
 * Return: Return i Success
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = -(i);
	}
	else if (i >= 0)
	{
		i = i;
	}
	return (i);

}
