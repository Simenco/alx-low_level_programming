#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: int value. +, 0 or - values are returned
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int diff;

	while ((s1[i] == s2[j]) && ((s1[i] != '\0') || (s2[j] != '\0')))
	{
		i++;
		j++;
	}
	diff = s1[i] - s2[j];


	return (diff);
}
