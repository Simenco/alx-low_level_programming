#include <stdio.h>

/**
 * using gets() and puts()
 */

int main(void)
{
	char str[80];
	int i, delt = 'a' - 'A';

	printf("Enter a string less than 80 characters:\n");
	gets(str);
	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= delt;
		}
	}
	printf("The entered string is (in uppercase):\n");
	puts(str);
	return(0);
}
