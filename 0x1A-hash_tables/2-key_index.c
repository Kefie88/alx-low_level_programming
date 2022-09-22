#include "hash_tables.h"
/**
 * key_index - Returns the index of a key
 * @key: Key
 * @size: Size of the array of the hash table
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;
	return (index);
}
