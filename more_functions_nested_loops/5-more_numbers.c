#include "main.h"
/**
 * more_numbers - Imprime una serie extendida de números.
 *
 * Descripción: Esta función se encarga de imprimir una serie extendida 14 veces.
 */
void more_numbers(void)
{
	int i = 0, j;

	while ( i < 15)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar('0' + j);	

		i++;
	}
	_putchar('\n');
}	
