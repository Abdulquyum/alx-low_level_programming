#include "main.h"

/**
 * cap_string - capitalizes stringsn after certain symbols
 *
 * @str: parameter for string
 *
 * Return: capitalized strings
 */
char *cap_string(char *str)
{
	int q, flag = 1;

	for (q = 0; str[q] != '\0'; q++)
	{
		if (str[q] >= 'a' && str[q] <= 'z')
		{
			if (flag == 1)
			{
				str[q] -= 32;
				flag = 0;
			}
		}
		if (str[q] == ',' || str[q] == ';' || str[q] == '.' || str[q] == '!')
		{
			flag = 1;
		}
		else if (str[q] == '?' || str[q] == '(' || str[q] == ' '
				|| str[q] == '\n' || str[q] == '\t')
		{
			flag = 1;
		}
		else if (str[q] == '"' || str[q] == ')' || str[q] == '{' || str[q] == '}')
		{
			flag = 1;
		}
		else
			flag = 0;
	}
	return (str);
}
