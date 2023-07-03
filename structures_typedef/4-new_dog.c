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
	int lenOw, lenName, i, j;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	lenOw = strlen(owner);
	lenName = strlen(name);

	new_dog->name = malloc(lenName + 1);
	new_dog->owner = malloc(lenOw + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}

	for (i = 0; i < lenName + 1; i++)
	{
		new_dog->name[i] = name[i];
	}

	for (j = 0; j < lenOw + 1; j++)
	{
		new_dog->owner[j] = owner[j];
	}

	/* AGE */
	new_dog->age = age;
	return (new_dog);
}
