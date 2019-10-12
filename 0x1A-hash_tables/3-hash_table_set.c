#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int hash;
	/* unsigned long int index; */
	hash_node_t *newnode;

	newnode = malloc(sizeof(hash_node_t));

	/* newnode->key = key */
	/* newnode->value = hash; */
	/* newnode->next = ht->arra; */

	ht = hash_table_create(size);
	hash = hash_djb2(key);
	ht->array[hash] = newnode;
	/* index = *(ht)->array[hash]; */

	printf("%lu\n", hash);

	return(0);



	/* ht->array = newnode; */

}
