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
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
