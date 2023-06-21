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

	last_digit = n % 10;

	if (n < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
