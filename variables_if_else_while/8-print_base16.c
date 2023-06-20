#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:This programming print numbers hexadecimales.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *number_hex = "0123456789abcdef";
	int i = 0;

	while (i < 16)
	{
		putchar(number_hex[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
