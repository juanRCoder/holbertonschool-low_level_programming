#include <stdio.h>
/**
 * main - Punto de entrada del programa.
 *
 * Description: This program replace multiple 3 and 5.
 *
 * Return: Siempre devuelve 0 para indicar éxito.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}

