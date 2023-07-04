#include <stddef.h>
#include "function_pointers.h"
/**
  * array_iterator - Ejecuta una función dada como parámetro en cada elemento
  * de un array
  * @array: Puntero al array de enteros
  * @size: Tamaño del array
  * @action: Puntero a la función a utilizar
  *
  * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
