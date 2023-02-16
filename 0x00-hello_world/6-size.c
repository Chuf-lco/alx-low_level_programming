#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	printf("Size of a char: %zu\n", sizeof(char)," byte(s)");
	printf("Size of an int: %zu\n", sizeof(int)," byte(s)");
	printf("Size of a long int: %zu\n", sizeof(long int)," byte(s)");
	printf("Size of a long long int: %zu\n", sizeof(long long int)," byte(s)");
	printf("Size of a float: %zu\n", sizeof(float)," byte(s)");
	return (0);
}
