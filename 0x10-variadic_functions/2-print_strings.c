#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - variadic function
 * @separator: pointer argument
 * @n: argument
 * desc: this function print numbers with separator
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, int) != NULL)
			printf("%d", va_arg(ap, int));
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);

	printf("\n");
}
