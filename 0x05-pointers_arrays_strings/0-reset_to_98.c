#include "main.h"

/**
 * reset_to_98 - is a function that updates the value of a var
 * @*n: pointer
 * Return: void
 */
void reset_to_98(int *n)
{
	int i;
	i = 0;

	n = &i;
	*n = 98;
}
