#include "main.h"

/**
 * get_bit - prints the bit value at any index specified
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
