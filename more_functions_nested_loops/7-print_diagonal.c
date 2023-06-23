#include "main.h"
/**
 * print_diagonal - Imprime una diagonal formada por el carácter '\'.
 *
 * @n: Número de veces que se debe imprimir el carácter '\' en la diagonal.
 *
 * Descripción: Esta función imprimie una diagonal '/'.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
			_putchar('/');
			n--;
		}
		_putchar('\n');
	}
}
