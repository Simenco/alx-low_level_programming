#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - variadic function
 * @n: argument
 * desc: this function sums all parameters
 * Return: the sum if n is not 0 
 */

 int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum_all = 0;

	va_start(ap, n);
	if (n == 0)
	{
		va_end(ap);
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
			sum_all += va_arg(ap, unsigned int);
		va_end(ap);
		return (sum_all);
	}
}
