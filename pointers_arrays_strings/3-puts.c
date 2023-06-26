#include "main.h"
/**
 * _puts - Imprime una cadena de caracteres seguida de una nueva línea.
 * @str: Puntero al inicio de la cadena de caracteres.
 *
 * Description: Devuelve una cadena con 'puts'.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
