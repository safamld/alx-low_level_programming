#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: table to retrieve value from
* @key: key to find value
*
* Return: value associated with key, or Null
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	
	if (ht == NULL)
		return (NULL);

	if (key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

