#include "main.h"

/**
 *  * _strcat -Entry point
 *   * description: Concatenate strings
 *    * @dest: Destination string
 *     * @src: Source string
 *      * Return: Return String Success
 */

char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*i != '\0')
	{
		i++;
	}

	while (*src != '\0')
	{
		*i++ = *src++;
	}
	return (dest);
}
