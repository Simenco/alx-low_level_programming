#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - pointer
 * @b: input
 *
 * Return: a pointer to the memory block
 */

void *malloc_checked(unsigned int b)
{
	int *p, n;

	p = (int *) malloc(sizeof(int) * n);
	if (p == NULL)
	{
		return (98);
		exit(EXIT_FAILURE);
	}
	return (p);
}
