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
	if (to == 0)
		return;

	*s = to;
}
