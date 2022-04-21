#include "main.h"

/**
 * rev_string - a function that prints a string, in reverse
 * @s: the string input
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char *st, *stp, ch;

	st = s;
	stp = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len - 1; i++)
	{
		stp++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		ch = *stp;
		*stp = *st;
		*st = ch;

		st++;
		stp--;
	}
}
