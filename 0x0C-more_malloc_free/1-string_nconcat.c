#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: byte to be cocatenated in s2
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int q, len1 = 0, len2 = 0, index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	for (q = 0; s1[q] != '\0'; q++)
	{
		ptr[index++] = s1[q];
	}

	if (n >= len2)
	{
		for (q = 0; s2[q] != '\0'; q++)
		{
			ptr[index++] = s2[q];
		}
	}
	else
	{
		for (q = 0; s2[q] != '\0' && n > 0; q++, n--)
		{
			ptr[index++] = s2[q];
		}
	}

	ptr[index++] = '\0';

	return (ptr);
}

/**
 * _strlen - lenght of string
 *
 * @str: string passed
 *
 * Return: string lenght
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);

	return (1 + _strlen(str + 1));
}
