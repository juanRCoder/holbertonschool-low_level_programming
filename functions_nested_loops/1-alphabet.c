#include <stdio.h>
#include "main.h"
/**
 * main - Start entry point
 *
 * Description: This program print the alphabet.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
