#include "main.h"

/**
 * cap_string - capilizes words in string
 *
 * @x: pointer parameter
 *
 * Return: pointer to x.
 */
char *cap_string(char *x)
{
	int count;

	count = 0;
	while (x[count] != '\0')
	{
		if (x[0] >= 97 && x[0] <= 122)
		{
			x[0] = x[0] - 32;
		}
		if (x[count] == ' ' || x[count] == '\t' || x[count] == '\n')
		{
			if (x[count + 1] == 97 && x[count + 1] <= 122)
			{
				 x[count + 1] = x[count + 1] - 32;
			}
		}
		count++;
	}
	return (x);
}
