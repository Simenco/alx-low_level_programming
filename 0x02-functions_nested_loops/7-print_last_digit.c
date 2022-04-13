#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n : int for the argument
 *
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = ((n % 10) * -1);
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = (n % 10);
		_putchar(last + '0');
		return (last);
	}
}
