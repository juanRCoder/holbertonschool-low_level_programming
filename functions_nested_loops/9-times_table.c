#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, result;

	for (i = 48; i <= 57; i++)
	{
		_putchar(48);

		for (j = 49; j <= 57; j++)
		{
			_putchar(44);
			_putchar(' ');

			result = i * j;

			if (result < 10)
				_putchar(' ');

			_putchar(48 + result);
		}
		_putchar('\n');
	}
}
