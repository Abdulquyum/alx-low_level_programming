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
	unsigned long int i;
	hash_table_t *newtable;

	newtable = malloc(sizeof(hash_table_t));

	if (newtable == NULL)
		return NULL;

	newtable->size = size;

	newtable->array = malloc(sizeof(hash_node_t *) * size);

	if (newtable->array == NULL)
	{
		free(newtable);
		return NULL;
	}

	for (i = 0; i < size; i++)
		newtable->array[i] = NULL;

	free(newtable->array);
	return newtable;
}
