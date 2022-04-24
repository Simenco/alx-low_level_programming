#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * after the first for loop, i becomes the length of the string
 * that dest is pointing to
 * Return: a string concatenated
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (k = 0; src[k] != '\0'; k++)
	{
	}
	if (n <= k)
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < k; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
