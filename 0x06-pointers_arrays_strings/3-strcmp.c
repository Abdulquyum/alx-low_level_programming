#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: parameter string one
 * @s2: parameter string two
 *
 * Return: Returns comparation result.
 */
int _strcmp(char *s1, char *s2)
{
	int count;
	int compared_value;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
	{
		count++;
	}
	compared_value = s1[count] - s2[count];
	return (compared_value);
}
