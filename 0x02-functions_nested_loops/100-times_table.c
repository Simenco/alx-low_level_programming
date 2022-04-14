#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_times_table - just as the name implies
 * @n: input to the function n <= 5 || n >= 0
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (j != n)
				{
					if (j == 0)
					{
						printf("%d,", k);
					}
					else
					{
						printf("%*d,", 4, k);
					}
				}
				else
				{
					printf("%*d", 4, k);
				}
			}
			printf("\n");
		}
	}
	printf("\n");
}
