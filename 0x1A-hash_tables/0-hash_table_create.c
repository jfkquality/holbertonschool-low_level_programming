#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	/* hash_node_t *arr[1024]; */

	new = malloc(sizeof(hash_table_t));

	new->size = size;
	new->array = malloc(sizeof(new->array) * size);

	return(new);

}
