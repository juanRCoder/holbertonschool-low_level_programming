#include "main.h"
/**
 * print_numbers - Imprime una serie de números en un rango específico.
 *
 * Descripción: Esta función se encarga de imprimir una secuencia de números
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}

