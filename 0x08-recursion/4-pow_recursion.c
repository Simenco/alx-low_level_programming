#include "main.h"

/**
 * _pow_recursion - returns factorial of a number
 * @x: integer input
 * @y: integer input
 * Return: integer power of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
