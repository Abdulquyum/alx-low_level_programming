#include "main.h"

/**
 * _strlen - string lenght
 *
 * @s: string parameter
 *
 * Return: lenght of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * check_palindrome - checks for palindrome string
 *
 * @str: string to be passed
 * @first: first character
 * @last: last character
 *
 * Return: if its palindrome or not
 */
int check_palindrome(char *str, int first, int last)
{
	if (first >= last)
		return (1);

	if (str[first] != str[last])
		return (0);

	return (check_palindrome(str, first + 1, last - 1));
}

/**
 * is_palindrome - checks if a string is same backward and forward
 *
 * @s: parametr for string
 *
 * Return: 1 if its plaindrome, else 0
 */
int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
		return (1);

	len = _strlen(s);

	return (check_palindrome(s, 0, len - 1));
}
