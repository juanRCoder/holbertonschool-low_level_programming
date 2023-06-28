#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of characters and initializes it with
 * a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize each element of the array with.
 *
 * Return: On success, returns a pointer to the newly created array.
 *         If 'size' is 0 or if the memory allocation fails, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
.}
