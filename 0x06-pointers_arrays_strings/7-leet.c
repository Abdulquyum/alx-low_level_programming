#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str: parameter for string
 *
 * Return: string
 */
char *leet(char *str)
{
	int q;

	for (q =0; str[q] != '\0'; q++)
	{
		if (str[q] == 'a' || str[q] == 'A')
			str[q] = '4';
		else if (str[q] == 'e' || str[q] == 'E')
			str[q] = '3';
		else if (str[q] == 'o' || str[q] == 'O')
			str[q] = '0';
		else if (str[q] == 'l' || str[q] == 'L')
			str[q] = '7';
		else if (str[q] == 'e' || str[q] == 'E')
			str[q] = '1';
	}

	return (str);
}
