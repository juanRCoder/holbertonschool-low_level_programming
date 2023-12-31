#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Frees the memory allocated for a dog.
 * @d: Pointer to the dog to free.
 *
 * Return: Void.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
