#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 *
 * @key: the value of key
 * @size: the size of a table
 *
 * Return: the index at which the key/value pair
 *	should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key);
	index %= size;

	return (index);
}
