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
	if (s2 == NUll)
		s2 = "";

	while (s1[lenght_1] != '\0')
		lenght_1++;

	while (s2[lenght_2] != '\0')
		lenght_2++;

	str = malloc(sizeof(char) * (lenght_1 + n + 1);

	if (!str)
		return(NULL);
	for (q = 0; q < lenght_1; q++)
		str[q] = s1[q];

	for (m = 0; m < n; m++)
		str[q++] = s2[m++];

	str[q++] = '\0';

	return (str);
}
