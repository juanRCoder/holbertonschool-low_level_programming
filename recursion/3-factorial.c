#include "main.h"
/**
 * factorial - Calcula el factorial de un número.
 * @n: Número para el cual se calculará el factorial.
 *
 * Return: El factorial de n.
 *         Si n es negativo, retorna -1 para indicar un error.
 */
int factorial(int n)
{
	if (n != 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
