#include "main.h"

/**
 *  * _strlen -Entry point
 *   * description: String length
 *    * @s: String character
 *     * Return: Return 0 Success
 */

int _strlen(char *s)
{
	int i = 0; /*length of string*/

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
