#include "main.h"

/**
 * _islower - program checks for lowercase alpahabets
 *
 * @c: parameter to be checked
 *
 * Return: returns 1 if its a lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
