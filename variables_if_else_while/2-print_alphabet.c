#include <stdio.h>
/**
 * main - Punto de entrada del programa
 *
 * Descripción: This function is print the alphabet.
 *
 * Return: Siempre devuelve 0 (éxito)
 */

int main(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
