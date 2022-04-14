#include "main.h"

/**
 * times_table - prints the 9 times tables starting with 0
 *
 * Return - void
 *
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int k;

			k = i * j;

			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
	}
}
