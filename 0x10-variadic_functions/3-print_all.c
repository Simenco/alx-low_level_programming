#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - function to print character
 *
 * @ap: variable of type va_list
 *
 * Return: void
 */

void print_char(va_list ap)
{
	char letter;

	letter = va_arg(ap, int);
	printf("%c", letter);
}

/**
 * print_int - function to print integer
 *
 * @ap: variable of type va_list
 *
 * Return: void
 */

void print_int(va_list ap)
{
	int num;

	num = va_arg(ap, int);
	printf("%d", num);
}

/**
 * print_float - function to print float
 *
 * @ap: variable of type va_list
 *
 * Return: void
 */

void print_float(va_list ap)
{
	float num;

	num = va_arg(ap, double);
	printf("%f", num);
}

/**
 * print_string - function to print string
 *
 * @ap: variable of type va_list
 *
 * Return: void
 */

void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - this function prints anything
 *
 * @format: indicates the format of what to be printed
 * c - char, i - integer, f - float, s - string
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *delimiter = "";

	/* array of structures*/
	print_t some_function[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};


	va_start(ap, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(some_function[j].input)))
			j++;

		if (j < 4)
		{
			printf("%s", delimiter);
			some_function[j].print_type(ap);
			delimiter = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
