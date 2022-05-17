#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - variadic function
 * @separator: pointer argument
 * @n: argument
 * desc: this function print numbers with separator
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d, ", va_arg(ap, unsigned int));
			else
				printf("%d", va_arg(ap, unsigned int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
				printf("%d%c ", va_arg(ap, unsigned int), *separator);
			else
				printf("%d", va_arg(ap, unsigned int));
		}
	}
	va_end(ap);
	printf("\n");
}
