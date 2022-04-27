#include "main.h"

/**
 * _memset - function that fills bytes of memory with constant byte
 * @s: char pointer s
 * @b: constant byte b
 * @n: size of byte
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
