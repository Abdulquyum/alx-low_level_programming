#include "hash_tables.h"

/**
 * hash_table_create - Creates an hash table
 *
 * @size: size of the table array
 *
 * Return: newly created table else, NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;

	newtable = malloc(sizeof(hash_table_t));

	if (newtable == NULL)
		return (NULL);

	newtable->size = size;

	newtable->array = malloc(sizeof(hash_node_t *) * size);

	if (newtable->array == NULL)
		return (NULL);

	return (newtable);
}
