#include "main.h"
/**
 * _puts_recursion - Imprime una cadena seguida de una nueva línea.
 * @s: Puntero a la cadena a imprimir.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
