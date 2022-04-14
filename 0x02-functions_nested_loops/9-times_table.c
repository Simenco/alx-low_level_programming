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

			if (j != 9)
			{
				if (((k / 10) == 0) && ((k % 10) == 0))
				{
					_putchar(' ');
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}
				else if (((k / 10) == 0) && ((k % 10) != 0))
				{
					_putchar(' ');
					_putchar((k % 10) + '0');
					_putchar(',');
					_putchar(' ')
				}
				else 
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (((k / 10) == 0) && ((k % 10) == 0))
                                {
					_putchar(' ');
					_putchar('0');
				}
				else if (((k / 10) == 0) && ((k % 10) != 0))
				{
					_putchar(' ');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
		}
		_putchar('\n')
	}
}
