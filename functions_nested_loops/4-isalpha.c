#include "main.h"
/**
 * _isalpha - verifica si un carácter es alfabético
 * @c: El carácter a verificar
 *
 * Return: 1 si c es alfabético, 0 en caso contrario
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
