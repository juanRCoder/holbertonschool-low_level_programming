#include "main.h"
/**
 * print_triangle - Imprime un triángulo formado por '#'.
 * @size: Tamaño del triángulo.
 *
 * Descripción: Esta función imprime un triángulo de caracteres '#'.
 */
void print_triangle(int size)
{
	int i, s, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (s = size; s > i; s--)
			{
				_putchar(' ');
			}
			for (n = 1; n <= i; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
