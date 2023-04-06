#include "main.h"

/**
 * _strlen_recursion - displays lenght of string
 *
 * @s: parameter for string
 *
 * Return: Returns lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * _compare - compares all characters in string
 *
 * @s: parameter for string
 * @num1: parameter for iterator 1
 * @num2: parameter for iterator 2
 *
 * Return: Result of comparation.
 */
int _compare(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		return (0 + _compare(s, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - shows if a string is a palindrome
 *
 * @s: parameter for string
 *
 * Return: Returns 1 if string is palindrome, else 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compare(s, 0, _strlen_recursion(s) - 1));
}
