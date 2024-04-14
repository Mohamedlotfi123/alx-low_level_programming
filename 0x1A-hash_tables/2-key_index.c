#include "hash_tables.h"
/**
 * key_index - function that generate index of the key.
 * @key : is the key
 * @size : the size of the array of teh hash table
 *
 * Return: index of the key/value pair.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int count = 0;

	count = hash_djb2(key) %  size;
	return (count);
}
