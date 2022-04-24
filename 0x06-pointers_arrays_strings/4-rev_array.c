#include "main.h"

/**
 * reverse_array - reverses array 
 * @a: pointer to the array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int last = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[last];
		a[last] = j;

		last--;
	}
}
