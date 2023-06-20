#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:This programming print the alphabt in reverse.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *alphabt_reverse = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabt_reverse[i]);
	}
	putchar('\n');
	return (0);
}
