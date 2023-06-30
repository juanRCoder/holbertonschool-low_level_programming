#include "main.h"
/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Description: This function takes a pointer to a string and reverses the
 *              order of its characters in place.
 */
void rev_string(char *s)
{
	int length = 0; i = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}

	for (; i < length; i++)
	{
		length--;
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
	}
}
