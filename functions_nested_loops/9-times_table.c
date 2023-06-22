#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j != 0)
				_putchar(',');

			if (result < 10 && j != 0)
				_putchar(' ');

			if (result >= 10)
				_putchar('0' + (product / 10));

			_putchar('0' + (product % 10));
		}
		_putchar('\n');
	}
}
