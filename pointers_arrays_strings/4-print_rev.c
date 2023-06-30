#include "main.h"
/**
 * print_rev - Imprime un string al revés.
 * @s: Puntero al inicio del string.
 *
 * Return: No devuelve nada.
 */
void print_rev(char *s)
{
	int length = 0, i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
