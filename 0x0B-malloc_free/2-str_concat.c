#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings in a new string
 *
 * @s1: parameter for first old string
 * @s2: parameter for second old string
 *
 * Return: Returns a pointer to new string if no error.
 */
char *str_concat(char *s1, char *s2)
{
	int lenght;
	int q = 0;
	int m = 0;
	int y = 0;
	char *newString;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[q])
		q++;

	while (s2[m])
		m++;

	lenght = q + m;
	newString = malloc(lenght * (sizeof(char)) + 1);
	if (newString == NULL)
	{
		return (NULL);
	}

	m = 0;
	while (y < lenght)
	{
		if (y <= q)
		{
			newString[y] = s1[y];
		}
		if (y >= q)
		{
			newString[y] = s2[m];
			m++;
		}
		y++;
	}
	newString[y] = '\0';
	return (newString);
}
