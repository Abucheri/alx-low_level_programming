#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair
 * and should be stored in the array of the hash table.
 *
 * @key: The key.
 * @size: The size of the array.
 *
 * Return: The index where the key should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash using the hash_djb2 function */
	hash_value = hash_djb2(key);
	/* Calculate the index based on the hash and array size */
	return (hash_value % size);
}
