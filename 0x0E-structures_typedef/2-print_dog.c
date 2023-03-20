#include <stdio.h>
#include "dog.h"

/**
 * print_dog -Function to print structure
 * @d: Pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nill)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
