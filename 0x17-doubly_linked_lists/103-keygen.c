#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - entry point into program, generates pass for crackme5
 *
 * @argc: no. of command-line arguments
 * @argv: array of strings containing the command-line arguments
 *
 * Return: 0, for success
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char generatedPassword[7], *characters;
	int usernameLength = strlen(argv[1]);
	int i, temp;

	characters = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW";
	characters += "6fxqZeF3Qa1rPhdKIouk";
	temp = (usernameLength ^ 59) & 63;
	generatedPassword[0] = characters[temp];
	temp = 0;
	for (i = 0; i < usernameLength; i++)
		temp += argv[1][i];
	temp ^= 79;
	generatedPassword[1] = characters[temp & 63];
	temp = 1;
	for (i = 0; i < usernameLength; i++)
		temp *= argv[1][i];
	temp ^= 85;
	generatedPassword[2] = characters[temp & 63];
	temp = 0;
	for (i = 0; i < usernameLength; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	generatedPassword[3] = characters[rand() & 63];
	temp = 0;
	for (i = 0; i < usernameLength; i++)
		temp += (argv[1][i] * argv[1][i]);
	temp ^= 239;
	generatedPassword[4] = characters[temp & 63];
	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	temp ^= 229;
	generatedPassword[5] = characters[temp & 63];
	generatedPassword[6] = '\0';
	printf("%s", generatedPassword);
	return (0);
}
