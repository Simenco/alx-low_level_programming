#include "main.h"

/**
 * puts_half - prints every other character of string
 * @str: the string input
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len;
	int n;

	for (len = 0; str[len] != '\0'; len++)
	{

	}
	n = (len - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
