#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, resultado;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			resultado = i * j;

			if (j != 0)
			{
				_putchar(',');
			}
			if (resultado < 10 && j != 0)
			{
				_putchar(' ');
			}
			if (resultado >= 10)
			{
				_putchar ('0' + (resultado / 10));
			}
			_putchar('0' + (resultado % 10));
		}
		_putchar('\n');
	}
}
