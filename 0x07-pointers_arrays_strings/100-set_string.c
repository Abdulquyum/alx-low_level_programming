#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: value to be set
 * @to: value to set to
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	int q;

	if (to == 0)
		return;

	for (q = 0; *s[q] != '\0'; q++)
	{
		to[q] = *s[q];
	}
}
