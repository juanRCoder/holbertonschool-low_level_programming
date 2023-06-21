#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, product;

	for (i = 0; i <= 9; i++)
	{
		product = 9 * i;
		if (i != 0)
		{
			if (product >= 10)
				_putchar('0' + product / 10);
			else
				_putchar(' ');
		}
		_putchar('0' + product % 10);
		if (i != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
