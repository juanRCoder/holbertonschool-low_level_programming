#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	/* Inicializamos las variables */
	va_list ap;
	int temp;
	unsigned int i;
	int suma;

	/* Incializa ap de se la posicion */
	va_start(ap, n);

	suma = 0;
	temp = 0;
	i = 0;

	/* Si el numero de argc es 0 retorna 0 */
	if (n == 0)
	{
		return (0);
	}

	/* Suma de los argumentos */
	while (i < n)
	{
		temp = va_arg(ap, int);
		suma = suma + temp;
		i++;
	}
	va_end(ap);

	return (suma);
}
