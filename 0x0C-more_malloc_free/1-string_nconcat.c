#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: parameter for string one to be concatenated
 * @s2: parameter for second string to be concatenated
 * @n: parameter for number of bytes
 *
 * Return: Returns the newly allocated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenght_1 = 0, lenght_2 = 0;
	unsigned int q, m;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lenght_1] != '\0')
		lenght_1++;

	while (s2[lenght_2] != '\0')
		lenght_2++;
	if (n > lenght_2)
		n = lenght_2;

	m = lenght_1 + n;

	str = malloc(m + 1);

	if (str == NULL)
		return (NULL);

	for (q = 0; q < m; q++)
		if (q < lenght_1)
			str[q] = s1[q];
		else
			str[q] = s2[q - lenght_1];

	str[q++] = '\0';

	return (str);
}
