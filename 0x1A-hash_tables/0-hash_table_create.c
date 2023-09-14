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
	ht->size = size;
	ht->array = malloc(sizeof(ht->array) * size);

	return (ht);
}
