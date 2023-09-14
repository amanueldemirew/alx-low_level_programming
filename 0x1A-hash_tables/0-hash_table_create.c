#include "hash_tables.h"

/**
 * hash_table_create- check the code for
 * @size: bit to have
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		fprintf(stderr, "Error:malloc faild");
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(ht->array) * size);
	if (ht == NULL)
	{
		fprintf(stderr, "Error:malloc faild");
		return (NULL);
	}
	return (ht);
}
