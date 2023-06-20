#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:This programming print the alphabet lowercase and UpperCase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] != 'e' && alphabet[i] != 'q')
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}
