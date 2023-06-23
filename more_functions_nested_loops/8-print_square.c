#include "main.h"
/**
 * print_square - Imprime un cuadrado de tamaño determinado.
 * @size: Tamaño del cuadrado.
 *
 * Descripción: Esta función imprime un cuadrado con caracter #.
 */
void print_square(int size)
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
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
