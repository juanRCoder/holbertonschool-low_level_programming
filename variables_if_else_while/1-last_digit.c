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

	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5", n % 10, n);
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0", n % 10, n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n % 10, n);

	return (0);
}
