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
	char *alphabet_lower_case = "abcdefghijklmnopqrstuvwxyz";
	char *alphabet_upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet_lower_case[i]);
	}
	while (j < 26)
	{
		putchar(alphabet_upper_case[j]);
		j++;
	}
	putchar('\n');
	return (0);
}
