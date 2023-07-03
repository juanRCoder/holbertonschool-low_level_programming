#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Inicializa una variable de tipo struct dog.
 * @d: Puntero a la variable struct dog que se va a inicializar.
 * @name: Puntero al nombre del perro.
 * @age: Edad del perro.
 * @owner: Puntero al nombre del dueño del perro.
 *
 * Descripción: Esta función inicializa los campos de una estructura
 * struct dog con los valores proporcionados de nombre, edad y dueño.
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
