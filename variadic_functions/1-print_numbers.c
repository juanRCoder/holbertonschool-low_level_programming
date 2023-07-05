#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - Imprime los números seguidos de una nueva línea.
 * @separator: La cadena que se imprimirá entre los números.
 * @n: El número de enteros pasados a la función.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int temp;

	i = 0;
	va_start(ap, n);

	/*Itera todos los elementos */
	while (i < n)
	{
		temp = va_arg(ap, int);
		printf("%d", temp);

		/*Al final no imprime la ', ' y si separator no es NULL*/
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
