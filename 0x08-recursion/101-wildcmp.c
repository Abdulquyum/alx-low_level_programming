#include "main.h"

/**
 * wildcmp - check if two strings are identical after comparison
 *
 * @s1: First string
 * @s2: second string
 *
 * Return: 1 if strings are identical, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
		return (1);

	if (*s2 == '*')
		return (1);

	return (wildcmp(s1 + 1, s2 + 1));
}
