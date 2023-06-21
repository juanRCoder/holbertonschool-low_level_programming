#include "main.h"
/**
 * print_sign - Imprime el signo de un número
 * @n: El número a verificar
 *
 * Return: 1 si n es positivo, -1 si n es negativo, 0 si n es cero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
