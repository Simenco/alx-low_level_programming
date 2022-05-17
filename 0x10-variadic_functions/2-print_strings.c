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
	va_list arg_ptr;
	unsigned int i;
	char *next_string;

	va_start(arg_ptr, n);
	for (i = 0; i < n; i++)
	{
		next_string = va_arg(arg_ptr, char *);

		if (next_string != NULL)
			printf("%s", next_string);
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(arg_ptr);

	printf("\n");
}
