#include "main.h"

/**
 * _strlen - a function that returns length of string
 * @s: the string input
 * Return: int value, the length of str
 */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
