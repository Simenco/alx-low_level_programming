#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	unsigned int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (c == s[n])
		{
			break;
		}
	}
	return ((c == s[n]) ? (s + n) : '\0');
}
