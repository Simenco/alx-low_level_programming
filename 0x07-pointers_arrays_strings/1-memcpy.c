#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: where to copy to
 * @src: where to copy from
 * @n: bytes to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
