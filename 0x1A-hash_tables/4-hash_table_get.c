#include "hash_tables.h"
/**
 * hash_table_get - Check the code for Holberton School students.
 *
 * @ht: Pointer to the hash table you want to add or update the key/value.
 * @key: Is the key.
 *
 * Return: Value associated with the element, or NULL if key couldnt be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key[0] == '\0' || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
