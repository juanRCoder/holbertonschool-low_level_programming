#include "main.h"
/**
 * _atoi - Convierte una cadena en un número entero.
 * @s: Puntero a la cadena de caracteres a convertir.
 *
 * Return: El número entero convertido.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Ignorar espacios iniciales */
	while (s[i] == ' ')
	{
		i++;
	}

	/* Verificar signo */
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;

		i++;
	}

	/* Convertir números */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (sign * result);
}
