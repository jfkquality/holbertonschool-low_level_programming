#include "hash_tables.h"

/**
 * key_index - create index from key hash
 *
 * @key: string used for key
 * @size: size of hash table -> array
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
