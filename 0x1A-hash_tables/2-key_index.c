#include "hash_tables.h"
/**
 * key_index - function give the index of the key
 * @key : key of the value in the hash table
 * @size : size of the hash table
 *
 * Return: Index of the key/value in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long y;

	y = hash_djb2(key);
	return (y % size);
}
