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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	/** after this iteration, the length of the string des
	 *  was return. i.e i becomes length of string*/
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
