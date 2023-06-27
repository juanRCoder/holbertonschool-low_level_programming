#include "main.h"
/**
 * _print_rev_recursion - Imprime una cadena al revés.
 * @s: Puntero a la cadena a imprimir al revés.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		return;
	}
}
