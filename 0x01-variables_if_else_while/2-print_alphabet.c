#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph[27];
	int i;

	while (i < 27)
	{
		alph[i] = 'a' + i;
	}

	alph[i] = '\0';

	putchar("alphabets a-z %s\n", alph);
	return (0);
}

