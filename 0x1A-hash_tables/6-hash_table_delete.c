#include "hash_tables.h"

/**
* hash_table_delete - deletes a hash table
*
* @ht: hash table 
*
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *next;
	hash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		next = ht->array[i];
		while ((tmp2 = next) != NULL)
		{
			next = next->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
