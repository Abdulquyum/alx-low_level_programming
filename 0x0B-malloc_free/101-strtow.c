#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int NumWord(char *s);

/**
 * numWord - number of word in a string
 *
 * @s: string to count from
 *
 * Return: number of words
 */
int NumWord(char *s)
{
	int result = 0, count;

	for (count= 0; s[count] && s[count] != ' '; count++)
	{
		result++;
	}

	return (count);
}

/**
 * strtow - splits string into words
 *
 * @str: string to be splited
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;

	words = numWord(str);

	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
