#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Description: This program print the alphabet.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char  letter;
	int i = 0;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
