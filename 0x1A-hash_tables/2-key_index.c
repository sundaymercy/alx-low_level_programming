#include "hash_tables.h"

/**
 * key_index - implementation of the djb2 algorithm
 * @key: string used to generate the hash value
 * @size: the sizes of the hash table
 * Return: value of the hash (index of hash table)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !size)
		return (0);
	return (hash_djb2(key) % size);
}
