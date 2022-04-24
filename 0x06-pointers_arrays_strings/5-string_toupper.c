#include "main.h"

/**
 * string_toupper - changes all lower cases to upper
 *
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] -= 32;
		}
	}
	return (str);
}
