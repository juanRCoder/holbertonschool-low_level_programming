#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - Imprime un carácter.
 * @ap: Lista de argumentos.
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - Imprime un entero..
 * @ap: Lista de argumentos.
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - Imprime un flotante.
 * @ap: Lista de argumentos.
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - Imprime una cadena.
 * @ap: Lista de argumentos.
 */
void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - Imprime cualquier tipo de dato según el
 * formato especificado.
 * @format: Lista de tipos de argumentos.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;

	i = 0;

	va_start(ap, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(ap);
				break;

			case 'i':
				print_int(ap);
				break;

			case 'f':
				print_float(ap);
				break;

			case 's':
				print_string(ap);
				break;

			default:
				break;
		}

		if (format[i + 1])
		{
			printf(", ");
		}

		i++;
	}
	va_end(ap);
	printf("\n");
}
