#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to use.
 * Return: string.
 */
char *cap_string(char *str)
{
	int i = 1, j, k;
	char a[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', '\t', ' '};

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			j = 0;
			k = 0;

			while (k == 0 && j < 13)
			{
				if (str[i - 1] == a[j])
				{
					k = 1;
				}
				j++;
			}
			if (k == 1)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
