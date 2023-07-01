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
	int length = 0, position;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		position = length / 2;
		str[position];
	}
	else
	{
		position = ((length + 1) / 2);
		str[position];
	}

	while (str[position] != '\0')
	{
		_putchar(str[position]);
		position++;
	}

	_putchar('\n');
}
