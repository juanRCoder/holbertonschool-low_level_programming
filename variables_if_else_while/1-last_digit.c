#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Punto de entrada del programa
 *
 * Descripción:This function generate a random number and check the last digit
 *
 * Return: Siempre devuelve 0 (éxito)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("%d and is greater than 5", n);
	else if (n == 0)
		printf("%d and is 0", n);
	else
		printf("%d and is less than 6 and not 0", n);

	return (0);
}
