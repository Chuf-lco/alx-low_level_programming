#include "dog.h"

/**
 * init_dog -function
 * @d: Variable
 * @name: Name parameter
 * @age: Age parameter
 * @owner: Owner parameter
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
