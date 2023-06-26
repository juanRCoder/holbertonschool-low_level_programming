#include "main.h"
/**
 * swap_int - intercambia los valores de dos variables enteras
 * @a: puntero a la primera variable
 * @b: puntero a la segunda variable
 *
 * Descripción: Este programa modifica los valores a y b por otros.
 */
void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;
}
