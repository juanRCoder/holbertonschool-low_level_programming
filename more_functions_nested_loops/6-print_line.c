#include "main.h"
/**
 * print_line - Imprime una línea compuesta por el carácter '_'.
 *
 * @n: Número de veces que se debe imprimir el carácter '_'.
 *
 * Descripción: Esta función imprime una linea formada por '_'.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
