#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function that copies string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * after the first for loop, i becomes the length of the string
 * that dest is pointing to
 * Return: a string concatenated
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (n > j)
	{
		if (src[j] == '\0')
		{
			for (; j < n; j++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	return (dest);
}
