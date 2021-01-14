#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table.
 *
 * @size: Size of the array
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int index = 0;

	if (size == 0)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	/**
	 * Create the space for the the table
	 */
	(new_table)->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	while (index < size)
	{
		(new_table)->array[index] = NULL;
		index++;
	}
	new_table->size = size;
	return (new_table);
}
