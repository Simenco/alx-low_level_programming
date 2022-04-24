#include <stdio.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: a string concatenated
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i]; i++)
	{
		_putchar(dest[i]);
	}
	for (i = 0; src[i]; i++)
	{
		_putchar(src[i]);
	}
	_putchar('\0');
	_putchar('\n');
	return (0);
}
