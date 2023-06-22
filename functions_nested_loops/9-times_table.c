#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);

		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar('0' + j);

			result = i * j;

			if (result < 10)
				_putchar(' ');

			_putchar('0' + (result / 10));
			_putchar('0' + (result % 10));
		}
		_putchar('\n');
	}
}
