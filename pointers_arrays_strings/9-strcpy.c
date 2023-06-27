#include "main.h"
/**
 * _strcpy - Copia una cadena de caracteres.
 * @dest: Puntero al destino donde se copiará la cadena.
 * @src: Puntero a la cadena de origen.
 *
 * Descripción: Esta función copia la cadena de caracteres apuntada por src
 * en el buffer apuntado por dest, incluyendo el carácter nulo al final.
 *
 * Return: Puntero al destino, es decir, a la cadena copiada.
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (temp);
}
