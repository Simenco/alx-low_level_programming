#include "main.h"

/**
 * set_bit - set the bit value at any index to 1
 * @n: the number
 * @index: index where value will be printed
 * Return: value at index or -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	a = 1 << index;

	*n = *n | a;
		return (1);
}
