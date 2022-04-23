#include <stdio.h>

/**
 * Initializing unsized array
 */

int main(void)
{
	int i, j;

	char array_ch[] = {'C', ' ', 
			   'i', 's', ' ',
			   'p', 'o', 'w', 'e', 'r',
			   'f', 'u', 'l', 'l', '\0'};
	int list_int[][3] = { 1, 1, 1,
			      2, 4, 8,
			      3, 9, 27,
			      4, 16, 64,
			      5, 25, 125,
			      6, 36, 216,
			      7, 49, 343};
	printf("The size of array_ch[] is %ld bytes.\n", sizeof(array_ch));
	for (i = 0; array_ch[i]; i++)
	{
		printf("%c", array_ch[i]);
	}
	printf("\n");

	for (i = 0; i < 7; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf("%5d", list_int[i][j]);
		}
	}
	printf("\nthe size of list_int[][3] is %ld bytes. \n", sizeof(list_int));
	return (0);
}
