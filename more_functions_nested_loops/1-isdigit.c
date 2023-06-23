#include "main.h"
/**
 * _isdigit - Verifica si un carácter es un dígito decimal.
 * @c: El carácter a verificar.
 *
 * Return: 1 si @c es un dígito decimal, 0 de lo contrario.
 */
int _isdigit(int c)
{
	if (c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
