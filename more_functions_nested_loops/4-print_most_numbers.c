#include "main.h"
/**
 * print_most_numbers - function to print specific numbers.
 *
 * Description: Print the numbers 0 through 9 minus the numbers 2 and 4.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
