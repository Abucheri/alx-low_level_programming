#include <stdio.h>
#include <string.h>

#define KEY_LENGTH 32

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
	int len = strlen(username);

	memset(key, 0, KEY_LENGTH);
	for (i = 0; i < len; i++)
	{
		key[i] = username[i] ^ (i + 1);
	}
	for (; i < KEY_LENGTH; i++)
	{
		key[i] = key[i % len];
	}
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
	char key[KEY_LENGTH];
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
