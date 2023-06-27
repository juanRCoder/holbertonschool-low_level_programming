#include "main.h"
/**
 * _atoi - Convierte una cadena en un número entero.
 * @s: Puntero a la cadena de caracteres a convertir.
 *
 * Return: El número entero convertido.
 */
int _atoi(char *s)
{
	int z = 0;
	int neg = 0;
	int dig = 0;
	unsigned int conv = 0;

	while (s[z])
	{
		if (s[z] == '-')
		{
			neg++;
		}
		else if (s[z] >= '0' && s[z] <= '9')
		{
			conv = conv * 10 + s[z] - '0';
			dig = 1;
		}
		else if (dig == 1 && (s[z] < '0' || s[z] > '9'))
			break;
		z++;
	}
	if (neg % 2 == 0)
	{
		return (conv);
	}
	else
	{
		return (-conv);
	}
}
