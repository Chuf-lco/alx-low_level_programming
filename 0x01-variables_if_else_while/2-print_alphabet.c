#include <stdio.h>
/**
 * main -Entry point
 * Description: lower case alphabets
 * REturn: Return 0 Success
 */

int main (void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar("%c", ch);
		ch++;
	}
	putchar();
	return (0);
}
