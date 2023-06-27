#include "main.h"
/**
 * puts_half - Imprime la mitad de una cadena.
 * @str: Puntero a la cadena.
 *
 * Descripción: Esta función imprime la mitad de una cadena, redondeando
 * hacia abajo si la longitud de la cadena es impar.
 */
void puts_half(char *str)
{
	int length = 0;
	char *ptr = str;

	while (*ptr)

	{
		length++;
		ptr++;
	}

	if (length % 2 == 0)
	{
		ptr = str + (length / 2);
	}
	else
	{
		ptr = str + ((length + 1) / 2);
	}

	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}

	_putchar('\n');
}
