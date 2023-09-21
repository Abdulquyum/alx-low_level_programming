#include "main.h"

/**
 * char *rot13 - converts letters to rot13 code
 * @str: parameter for string
 *
 * return: Nothing
 */
char *rot13(char *str)
{
	int q;

	for (q = 0; str[q] != '\0'; q++)
	{
		if (str[q] >= 'a' && str[q] <= 'm')
			str[q] += 13;
		else if (str[q] >= 'n' && str[q] <= 'z')
			str[q] -= 13;
	}
	return (str);
}
