#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * This function concatenates the strings 's1' and 's2' into a new string.
 * If NULL is passed, it is treated as an empty string.
 * The returned pointer points to a newly allocated space in memory that
 * contains the contents of s1, followed by the contents of s2, and terminated
 * by a null character.
 * The function returns NULL on failure.
 *
 * Return: On success, returns a pointer to the concatenated string.
 *         Returns NULL on failure (if memory allocation fails).
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	*result = (char *)malloc(len1 + len2 + 1);

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcpy(result, s2);

	return (result);
}
