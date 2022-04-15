#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers inl 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	unsigned long int c;
	int count;

	c = a + b;

	printf("%d, ", a);
	printf("%d, ", b);
	printf("%lu, ", c);

	for (count = 0; count < 46; count++)
	{
		a = b;
		b = c;
		c = a + b;

		if (count != 46)
		{
			printf("%lu, ", c);
		}
		else
		{
			printf("%lu", c);
		}
	}
	printf("\n");
	return (0);
}
