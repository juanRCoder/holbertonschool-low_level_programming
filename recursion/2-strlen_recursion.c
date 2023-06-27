#include "main.h"
/**
 * _strlen_recursion - Calcula la longitud de una cadena de forma recursiva.
 * @s: Puntero a la cadena para calcular la longitud.
 *
 * Return: La longitud de la cadena.
 */
int _strlen_recursion(char *s)
{
	int length = 1;
	
	if(*s == '\0')
	{
		return (0);
	}

	return (length += strlen_recursion(s + 1));
}
