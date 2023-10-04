#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int q, i, len1 = 0, len2 = 0;

	for (q = 0; s1[q] != '\0'; q++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	ptr = malloc(len1 * sizeof(char) + len2 * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	if (*s1 == '\0')
		*ptr = *s2;


	if (*s2 == '\0')
		*ptr = *s1;


	for (q = 0; s1[q] != '\0'; q++)
	{
		ptr[q] = s1[q];
	}
	for (q = 0; s2[q] != '\0'; q++)
	{
		ptr[len1] = s2[q];
		len1++;
	}
	ptr[len1] = '\0';

	return (ptr);
}
