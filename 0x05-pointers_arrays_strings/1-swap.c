#include "main.h"

/**
 * swap_int - is a function that swaps values of 2 int
 * @a: int to swap
 * @b: int to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
