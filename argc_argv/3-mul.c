#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Punto de entrada del programa.
 * @argc: Número de argumentos pasa.
 * @argv: Array que contiene los argumentos.
 *
 * Description: Este programa multiplica dos números enteros pasados
 * como argumentos y muestra el resultado.
 *
 * Return: Devuelve 0 si todo esta correctamente.
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
