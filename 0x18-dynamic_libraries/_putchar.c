#include <unistd.h>

/**
 * _putchar - write single char to stdout
 *
 * @c: parameter for character
 *
 * Return: 0 on success, else -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
