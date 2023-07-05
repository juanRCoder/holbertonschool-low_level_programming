#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int temp;

	/*Si el separator es NULL no imprime nada */
	if (separator != NULL)
	{
		va_start(ap, n);
		i = 0;

		/*Itera todos los elementos */
		while (i < n)
		{
			temp = va_arg(ap, int);
			printf("%d", temp);

			/*Al final no imprime la ', '*/
			if (i < n - 1)
			{
				printf("%s", separator);
			}
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}
