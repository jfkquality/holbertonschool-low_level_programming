#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 *
 * @size: # of elements in array
 *
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	/* hash_node_t *arr[1024]; */

	new = malloc(sizeof(hash_table_t));
	if (new == NULL || isdigit(size) > 0)
                return (NULL);


	new->size = size;
	new->array = malloc(sizeof(new->array) * size);

	return (new);

}
