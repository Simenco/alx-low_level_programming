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
	int c;
	int count;

	c = a + b;

	printf("%d, ", a);
	printf("%d, ", b);
	printf("%d, ", c);

	for (count = 3; count < 50; count++)
	{
		if (count != 49)
		{
			a = b;
			b = c;
			c = a + b;

			printf("%d, ", c);
		}
		else
		{
			a = b;
			b = c;
			c = a + b;

			printf("%d", c);
		}
	}
	printf("\n");
	return (0);
}
