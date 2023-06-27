#include "main.h"
/**
 * _sqrt_recursion - Calcula la raíz cuadrada de un número.
 * @n: Número para el cual se calculará la raíz cuadrada.
 *
 * Return: La raíz cuadrada entera de n.
 *
 * sqrt_recursive - Función auxiliar para el cálculo recursivo.
 * @n: Número para el cual se calculará la raíz cuadrada.
 * @guess: Valor de aproximación de la raíz cuadrada.
 */
int sqrt_recursive(int n, int guess);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (sqrt_recursive(n, 1));
}

/**
 * sqrt_recursive - Función para el cálculo recursivo de la raiz.
 * @n: Número para el cual se calculará la raíz cuadrada.
 * @guess: Valor de aproximación de la raíz cuadrada.
 *
 * Return: La raíz cuadrada entera de n.
 */
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}

	return (sqrt_recursive(n, guess + 1));
}
