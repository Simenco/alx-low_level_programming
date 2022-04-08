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

	for (i = 0; i < 26; i++)
	{
	  alph[i] = 'a' + i;
	}
	
	alph[i] = '\0';

	getchar("%s\n", alph);
	
	return (0);
}
