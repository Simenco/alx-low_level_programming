#include "main.h"

/**
 * print_binary - prints binary rep of a number
 * @n: the number
 * Return: void function
 */

void print_binary(unsigned long int n)
{
	unsigned long int j, binary[INT_SIZE];
	int i = INT_SIZE - 1;

	while (i >= 0)
	{
		binary[i] = n & 1;
		i--;
		n = n >> 1;
	}
	for (j = 0; j < INT_SIZE; j++)
	{
		_putchar(binary[j] + '0');
	}
}
