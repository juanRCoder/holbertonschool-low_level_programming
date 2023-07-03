#include <stdio.h>
#include <stldio.h>
#include <string.h>
#include "main.h"
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

	/*Asigna memoria para un nuevo struct perro)*/
	new_dog = malloc(sizeof(dog_t));

	/*En caso de que la struct perro salga NULL */
	if (new_dog == NULL)
	{
		return (NULL);
	}

	/*Copia name a new_dog */
	new_dog->name = strdup(name);

	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}

	/*Copia owner a new_dog */
	new_dog->name = strdup(owner);

	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}

	/*Asigna el age */
	new_dog->age == age;

	return (new_dog);
}
