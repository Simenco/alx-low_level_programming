#include <stdio.h>

/**
 * main - this program prints sum of mult of 3 and 5
 *
 * Return: int
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			sum += i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
