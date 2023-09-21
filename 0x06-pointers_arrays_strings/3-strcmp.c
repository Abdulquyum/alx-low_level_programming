#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int q, len1 = 0, len2 = 0;

	for (q = 0; s1[q] != '\0'; q++)
	{
		len1++;
	}
	for (q = 0; s2[q] != '\0'; q++)
	{
		len2++;
	}
	if (s1[q] < s2[2] && len1 < len2)
		return (15);
	else if (s1[q] > s2[q] && len1 > len2)
		return (-15);
	else
		return (0);
}
