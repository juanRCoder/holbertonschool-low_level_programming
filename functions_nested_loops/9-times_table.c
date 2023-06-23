#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, result, count;

	for (i = 0; i < 10; i++)
	{
		count = 0;

		for (j = 0; j < 10; j++)
		{
			result = count * i;

			if (result > 9)
			{
				_putchar(44);
				_putchar(32);
				_putchar(48 + (result / 10));
			}

			else if (j != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			_putchar(48 + (result % 10));
			count++;
		}
		_putchar('\n');
	}
}
