#include "function_pointers.h"
/**
  * print_name - Imprime un nombre utilizando una función de
  * impresión proporcionada.
  * @name: Puntero al nombre a imprimir
  * @f: Puntero a la función de impresión
  *
  * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
