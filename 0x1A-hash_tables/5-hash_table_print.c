#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 *
 * @ht: Is the hash table.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}
	else
	{
		printf("{");
		while (i <= ht->size)
		{
			if (ht->array[i] != NULL)
			{
				while (ht->array[i])
				{
					if (flag == 1)
					{
						printf(", ");
						flag = 0;
					}
					printf("'%s': ", ht->array[i]->key);
					printf("'%s'", ht->array[i]->value);
					flag = 1;
					ht->array[i] = ht->array[i]->next;
				}
			}
			i++;
		}
		printf("}\n");
	}
}
