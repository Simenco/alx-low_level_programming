#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: integer input
 * Return: integer
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
