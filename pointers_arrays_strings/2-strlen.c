#include "main.h"
/**
 * _strlen - Calcula la longitud de una cadena.
 * @s: Puntero al inicio de la cadena.
 *
 * Return: La longitud de la cadena.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
