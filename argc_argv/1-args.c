#include <stdio.h>
#include "main.h"
/**
 * main - Punto de entrada del programa
 * @argc: Número de argumentos pasados al programa
 * @argv: Arreglo de cadenas de caracteres que contiene los argumentos
 *
 * Return: 0 en caso de éxito
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
