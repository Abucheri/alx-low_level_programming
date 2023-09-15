#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void generate_key(const char *username, char *key);

/**
 * generate_key - generates a key based on the username
 *
 * @username: name for which the key is generated
 * @key: generated key (output parameter)
 *
 * Return: Nothing
 */

void generate_key(const char *username, char *key)
{
	int i;
	unsigned char hash;

	memset(key, 0, 64);
	for (i = 0, hash = 0; username[i]; ++i)
	{
		hash += username[i];
	}
	sprintf(key, "%02x%02x%02x%02x", hash, hash, hash, hash);
}

/**
 * main - entry point into program
 *
 * @argc: no. of command-line arguments
 * @argv: array of strings containing the command-line arguments
 *
 * Return: 0, for success
 * else, 1 for incorrect usage
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char key[64];
	char *username;

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", argv[0]);
		return (1);
	}
	username = argv[1];
	generate_key(username, key);
	printf("%s\n", key);
	return (0);
}
