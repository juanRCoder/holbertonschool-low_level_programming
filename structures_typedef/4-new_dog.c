#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created dog, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);

	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}

	new_dog->owner = strdup(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;

	return (new_dog);
}
