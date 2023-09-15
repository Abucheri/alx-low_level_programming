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
	snprintf(key, KEY_LENGTH, "KeyFor%s", username);
	for (i = len + 6; i < KEY_LENGTH; i++)
	{
		key[i] = key[i % (len + 6)];
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
	printf("Generated key for %s: %s\n", username, key);
	return (0);
}
