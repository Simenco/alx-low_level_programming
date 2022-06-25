#include "main.h"
#include <string.h>

/**
 * binary_to_uint - this function converts binary to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * -there is one or more chars in the string that is not  or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i, a, j = 0;
	unsigned int n, digit, decimal = 0;


	n = atoi(b);

	if (b != NULL)
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			a = b[i] - '0';

			if ((a > 1) || (a < 0))
				return (0);

			while (n != 0)
			{
				digit = n % 10;
				decimal += digit << j;
				n = n / 10;
				j++;
			}
		}
		return (decimal);
	}

	else
		return (0);
}
