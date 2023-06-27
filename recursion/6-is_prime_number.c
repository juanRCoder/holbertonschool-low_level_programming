#include "main.h"
/**
 * is_prime_number - Verifica si un número es primo.
 * @n: Número a verificar.
 *
 * Return: 1 si el número es primo, 0 en caso contrario.
 *
 * is_prime_recursive - Función recursiva para verificar numero primo.
 * @n: Número a verificar.
 * @divisor: Divisor actual a comprobar.
 */
int is_prime_recursive(int n, int divisor);

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}

	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - verifica si un numero es primo o no.
 * @n: Número a verificar.
 * @divisor: Divisor actual a comprobar.
 *
 * Return: 1 si el número es primo, 0 en caso contrario.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	if (divisor == 2)
	{
		return (is_prime_recursive(n, 3));
	}

	return (is_prime_recursive(n, divisor + 2));
}


