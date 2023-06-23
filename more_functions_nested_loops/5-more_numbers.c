#include "main.h"
/**
 * more_numbers - Imprime una serie extendida de números.
 *
 * Descripción: Esta función se encarga de imprimir una serie de 14 numbers..
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 15)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
		i++;
		_putchar('\n');
	}
}
