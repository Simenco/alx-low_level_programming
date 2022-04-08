#include <stdio>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char type_Char;
	int type_int;
	long type_Lint;
	long long type_LLint;
	float type_float;
	printf("Size of a char: %lu byte(s)\n", sizeof(type_Char));
	printf("Size of an int: %lu byte(s)\n", sizeof(type_int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(type_Lint));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(type_LLint));
	printf("Size of a float: %lu byte(s)\n", sizeof(type_float));

	return (0);
}
