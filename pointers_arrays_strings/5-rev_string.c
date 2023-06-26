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
	char *start = s;
	char *end = s;
	char var;

	while (*end)
	{
		end++;
	}
	end--;

	while (start < end)
	{
		var = *start;
		*start = *end;
		*end = var;

		start++;
		end--;
	}
}
