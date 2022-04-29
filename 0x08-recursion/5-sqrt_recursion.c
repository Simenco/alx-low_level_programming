#include "main.h"
/**
 * sqrt2 - makes possible to evaluate from 1 to n
 * @n: number to calculate sqaure root
 * @i: iterator
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

int sqrt2(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + sqrt2(n, i + 1));
}

/**
 * _sqrt_recursion - returns nat sqrt of a number
 * @n: integer input
 * Return: natural sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (sqrt2(n, 2));
}
