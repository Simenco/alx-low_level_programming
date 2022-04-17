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
	unsigned long int sum = 2;

	for (count = 0; count < 48; count++)
	{
		c = a + b;
		a = b;
		b = c;

		if ((c < 4000000) && ((c % 2) == 0))
		{
			sum += c;
		}
	}
	printf("sum of all even-valued terms less than 4,000,000: %lu", sum);
	printf("\n");
	return (0);
}
