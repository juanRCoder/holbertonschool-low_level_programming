#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - Suma de 2 enteros.
 * @a: Primer numero.
 * @b: Segundo numero.
 *
 * Return: Retorna la suma de a y b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Resta de 2 enteros.
 * @a: Primer numero.
 * @b: Segundo numero.
 *
 * Return: Retorna la resta de a y b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplica 2 numeros.
 * @a: Primero numero.
 * @b: Segundo numero.
 *
 * Return: Retorna la multiplicacion de a y b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide 2 numeros.
 * @a: Primero numero.
 * @b: Segundo numero.
 *
 * Return: Retorna la division de a y b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Devuelve el resto de 2 numeros.
 * @a: Primero numero.
 * @b: Segundo numero.
 *
 * Return: Retorna el resto de a y b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
