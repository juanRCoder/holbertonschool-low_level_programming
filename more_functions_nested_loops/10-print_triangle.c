#include "main.h"
/**
 * print_triangle - Imprime un triángulo formado por '#'.
 * @size: Tamaño del triángulo.
 *
 * Descripción: Esta función imprime un triángulo de caracteres '#'.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				_putchar(' ');
			}
			for (j = size - i - 1; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
