#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints integer from string
 *
 * Return: integer value of a string
 */

int main()
{
	char c[20];
	int i;

	printf("enter the string:\n");
	scanf("%s", c);

	i = atoi(c);

	printf("%d\n", i);

	return (0);
}
