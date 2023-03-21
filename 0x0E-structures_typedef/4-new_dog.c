#include "dog.h"
#include <stdlib.h>
/**
 * _strlen -Length of string
 * @s: Length parameter
 * Return: Return length Success
 */
int _strlen(char *s)
{
		int len = 0; /*length of string*/

		while (*s != '\0')
		{
			len++;
			s++;
		}
		return (len);
}
/**
 * new_dog -Struct function
 * @name: Name parameter
 * @age: Age parameter
 * @owner: Owner parameter
 * Return: Return new struct Success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, name_len = _strlen(name);
	int owner_len = _strlen(owner);

	dog_t *new_dog = malloc(sizeof(dog_t)); /*allocate memory for new dog*/

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++) /*copy name values to new string*/
	{
		new_dog->name[i] = name[i];
	}
	for (i = 0; i <= owner_len; i++)/*copy owner values to new string*/
	{
		new_dog->owner[i] = owner[i];
	}
	new_dog->age = age;
	return (new_dog);
}
