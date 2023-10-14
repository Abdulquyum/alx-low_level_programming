#include <stdio.h>

/**
 *  * get_op_func - gets operational sign
 *
 * @s: string operator
 *
 * Return: operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	if (s == NULL)
		return (NULL);
	else if (s == "+")
		return (ops[0]);
	else if (s == "-")
		return (ops[1]);
	else if (s == "*")
		return (ops[2]);
	else if (s == "/")
		return (ops[3]);
	else if (s == "%")
		return (ops[4]);
}
