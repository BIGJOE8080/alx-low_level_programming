#include "hash_tables.h"

/**
 * hash_table_create - create a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb;
	hash_node_t **array;
	unsigned long int i;

	tb = malloc(sizeof(hash_table_t));
	if (tb == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	tb->array = array;
	tb->size = size;

	return (tb);
}
