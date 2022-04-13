#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n : int for the argument
 * Return: 0 or 1
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
		_putchar(last + '0');
	}
	return (last);
}
