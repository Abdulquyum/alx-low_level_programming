#include "main.h"

/**
 *  _atoi - converts strings to number
 *
 * @s: parameter for string
 *
 * Return: Nothing
 */
int _atoi(char *s)
{
	int q, sign = 1, result = 0;

	for (q = 0; s[q] != '\0'; q++)
	{
		if (s[q] == '\0')
			break;
		if (s[q] == '-')
			sign = -1;
		else if (s[q] == '+')
			sign = 1;

		if (s[q] >= '0' && s[q] <= '9')
		{
			result = result * 10 + (s[q] - 48);
		}
		else if (result != 0)
			break;
		else if ((*s == ' ') || (!(*s >= '0' && *s <= '9')))
				continue;
	}
	return (result * sign);
}
