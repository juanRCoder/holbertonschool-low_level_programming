#include <stdio.h>
#include "main.h"
/**
 * main - Punto de entrada del programa
 * @argc: Número de argumentos pasados al programa
 * @argv: Arreglo de cadenas de caracteres que contiene los argumentos
 *
 * Return: 0 en caso de éxito
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
