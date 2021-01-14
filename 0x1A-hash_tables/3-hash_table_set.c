#include "hash_tables.h"

/**
 * hash_table_set - Function that adds an element to the hash table.
 *
 * @ht: Pointer to the hash table you want to add or update the key/value
 * @key: Is the key. 
 * @value:  Is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;
	
	if (ht == NULL || key[0] == '\0' || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
	}
	else
		new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
