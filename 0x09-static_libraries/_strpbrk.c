#include "main.h"

/**
 *  * _strpbrk -Entry point
 *   * description: Search tring for any set of bytes
 *    * @s: Pointer
 *     * @accept: String
 *      * Return: Return byte Success
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
