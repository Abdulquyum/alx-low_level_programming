#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory
 *
 * @ptr: pointer to previous allocated memory
 * @old_size: previous allocated memory
 * @new_size: new allocated memory
 *
 * Return: pointer to new allocated string (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_byte;

	if (ptr == NULL)
		new_ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_size > old_size)
		min_byte = old_size;
	else
		min_byte = new_size;

	if (new_size != 0)
	{
		_memcpy(new_ptr, ptr, min_byte);
		free(ptr);
		return (new_ptr);
	}
	else
		return (NULL);
}

/**
 * _memcpy - copy memory from source to destination
 *
 * @dest: destination memory
 * @src: source memory
 * @n: number of byte to be copied
 *
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		dest[q] = src[q];
	}

	return (dest);
}
