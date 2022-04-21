#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @s: the string input
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
