#include "main.h"
/**
 * _pow_recursion - Calcula la potencia de un número utilizando recursión.
 * @x: Base de la potencia.
 * @y: Exponente de la potencia.
 *
 * Return: El resultado de x elevado a la potencia y.
 *         Si y es negativo, retorna -1 para indicar un error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * (pow_recursion(x, y - 1)));
}
