#include <stdio.h>
#include "main.h"
/**
 * print_array - Imprime elementos de un arreglo de enteros
 * @a: Puntero al arreglo de enteros
 * @n: Número de elementos a imprimir
 *
 * Descripción: Esta función imprime los primeros n elementos del arreglo a,
 * separados por comas y espacios, seguidos de un salto de línea.
 */
void print_array(int *a, int n)
{
	int i = 1;

	if (n > 0)
	{
		printf("%d", a[0]);

		while (i < n)
		{
			printf(", %d", a[i]);
			i++;
		}
	}
	printf("\n");
}
