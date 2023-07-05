#include <stdio.h>
#include "variadic_functions.h"
/**
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *temp;
	unsigned int i;

	i = 0;
	va_start(ap, n);
	
	/*Itera los argumentos */

	while (i < n)
	{
		temp = va_arg(ap, char*);
	
		/*Si uno de los string es NULL imprime (nil) */
		if (temp != NULL)
		{
			printf("%s", temp);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
