#include "main.h"
#include <stdlib.h>
#include "string.h"

/**
 * string_nconcat - pointer
 * @s1:string1
 * @s2 : string2
 * @n: bytes of string 2
 *
 * Return: a pointer to the memory block of s1 + nbytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;

	if (n >= strlen(s2))
	{
		result = malloc(strlen(s1) + strlen(s2) + 1);
		if (result == NULL)
		{
			exit(EXIT_FAILURE);
			return (NULL);
		}
		strcpy(result, s1);
		strcat(result, s2);
		return (result);
	}
	return (NULL);
}
