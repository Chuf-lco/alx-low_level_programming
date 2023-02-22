#include <stdio.h>

/**
* main -Entry point
* description: Print fibonacci numbers
* Return: Return 0 Success
*/

int main(void)
{
	long int i, j, sum;
	int k;

	i = 1;
	j = 2;
	printf("1");
	for (k = 2; k <= 50; k++)
	{
		sum = i + j;
		i = j;
		j = sum;
		printf(", %lu", i);
	}
	printf("\n");
	return (0);
}
