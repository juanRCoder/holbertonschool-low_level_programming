#include "main.h"
/**
 * _isupper - Verifica si un carácter es una letra mayúscula.
 * @c: El carácter a verificar.
 *
 * Return: 1 si @c es una letra mayúscula, 0 de lo contrario.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
