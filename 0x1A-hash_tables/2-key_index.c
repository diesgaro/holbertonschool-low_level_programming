#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key.
 *
 * @key: The key
 * @size: size of the array
 *
 * Return: the index at which the key/value pair should be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_key;

	index_key = hash_djb2(key) % size;

	return (index_key);
}
