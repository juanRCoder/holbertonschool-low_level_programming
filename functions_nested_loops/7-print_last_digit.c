#include "main.h"
/**
 * print_last_digit - Imprime el último dígito de un número
 * @n: El número del cual se imprimirá el último dígito
 *
 * Return: El último dígito de @n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n == INT_MIN)
	{
		last_digit = 8;
		_putchar(last_digit + '0');
	}
	else
	{
		if (n < 0)
			n = -n;
		last_digit = n % 10;
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
