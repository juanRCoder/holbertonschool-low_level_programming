#include <stdio.h>
#include "dog.h"
/**
 * print_dog - Imprime los detalles de una estructura dog
 * @d: Puntero a la estructura dog
 *
 * Descripción: Imprime el nombre, la edad y el dueño de un perro.
 *
 * Si alguno de los campos de la estructura es NULL,
 * imprime "(nil)" en su lugar.
 *
 * Si d es NULL, no imprime nada.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		printf("Age: %f\n", d->age);

		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
	}
}
