#include "main.h"

/**
 * reverse_array -Entry point
 * description: Reverse array
 * @a: Array
 * @n: Elements
 */

void reverse_array(int *a, int n)
{
	int rev_count;
	int len;

	for (rev_count = 0; rev_count < n; rev_count++)
	{
		n--;
		len = a[rev_count];
		a[rev_count] = a[n];
		a[n] = len;

	}
}
