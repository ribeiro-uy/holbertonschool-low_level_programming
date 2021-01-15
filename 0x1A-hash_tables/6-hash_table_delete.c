#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes a hash table.
 *
 * @ht: Is the hash table.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *tmp = NULL;
	hash_node_t *prev = NULL;

	if (ht == NULL)
		return;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			prev = tmp;
			free(tmp->key);
			free(tmp->value);
			tmp = tmp->next;
			free(prev);
		}
		ht->array[i] = NULL;
		i++;
	}
	free(ht->array);
	free(ht);
}


