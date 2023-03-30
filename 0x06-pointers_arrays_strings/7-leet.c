#include "main.h"

/**
 * leet - encodes strings into 1337
 *
 * @x: points to string
 *
 * Return: returns pointer to string.
 */
char *leet(char *s)
{
	int lenght;
	int count;
	char leetletters[] = "aAeEoOtTlL";
	char leetnums[] = "4433007711";

	lenght = 0;
	while (s[lenght] != '\0')
	{
		count = 0;
		while (count < 10)
		{
			if (leetletters[count] == s[lenght])
			{
				s[lenght] = leetnums[count];
			}
			count++;
		}
		lenght++;
	}
	return (s);
}
