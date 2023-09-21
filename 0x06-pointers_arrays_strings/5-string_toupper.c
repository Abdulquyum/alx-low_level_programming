#include "main.h"

/**
 * string_toupper - converts string to uppercase
 *
 * @str: parameter for string
 *
 * Return: Nothing
 */
char *string_toupper(char *str)
{
	int q;

	for (q = 0; str[q] != '\0'; q++)
	{
		if (str[q] >= 97 && str[q] <= 122)
			str[q] -= 32;
	}
	return (str);
}
