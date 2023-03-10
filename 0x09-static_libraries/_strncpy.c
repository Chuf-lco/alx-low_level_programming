#include "main.h"

/**
 *  * _strncpy -Entry point
 *   * description: Copy string
 *    * @dest: Destination
 *     * @src: Source
 *      * @n: Number of values
 *       * Return: Return string Success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
