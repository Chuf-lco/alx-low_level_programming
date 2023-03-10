#include <stdio.h>
#include <ctype.h>

int atoi(char *s);

/**
 * main -Entry point
 * @argc: Count
 * @argv: Array
 * Return: Return 0 Success
 */

int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *a = argv[i];

		for (j = 0; a[j] != '\0'; j++)
		{
			if (!isdigit(a[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(a);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
