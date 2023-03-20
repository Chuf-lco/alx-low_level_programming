#include <stdio.h>
#include "dog.h"

/**
 * print_dog -Function to print structure
 * @d: Pointer
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (d->age == NULL)
		printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
}
