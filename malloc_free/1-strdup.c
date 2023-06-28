#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Crea una copia en memoria de una cadena dada.
 * @str: Cadena de caracteres a duplicar.
 *
 * Description: Esta función retorna un puntero a una nueva cadena que
 * es una copia de la cadena 'str'.
 * La memoria para la nueva cadena se obtiene con malloc y puede ser liberada
 * con free.
 * Return: Retorna NULL si 'str' es NULL o si no hay suficiente memoria
 * disponible.
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
