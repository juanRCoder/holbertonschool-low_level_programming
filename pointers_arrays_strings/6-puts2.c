#include "main.h"
/**
 * puts2 - Imprime caracteres alternativos de una cadena.
 * @str: Puntero a la cadena de caracteres.
 *
 * Descripción: Esta función imprime en stdout los caracteres alternativos de
 *              una cadena, comenzando por el primer carácter.
 *              No se imprime el carácter nulo final.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
