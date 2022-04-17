#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers inl 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	int count;

	c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);
	printf("%lu, ", c);

	for (count = 0; count < 95; count++)
	{
		a = b;
		b = c;
		c = a + b;

		if (count != 94)
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
