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
	char pass[7], *code;
	int len = strlen(argv[1]), i, t;

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	t = (len ^ 59) & 63;
	pass[0] = code[t];
	t = 0;
	for (i = 0; i < len; i++)
		t += argv[1][i];
	t ^= 79;
	pass[1] = code[t & 63];
	t = 1;
	for (i = 0; i < len; i++)
		t *= argv[1][i];
	t ^= 85;
	pass[2] = code[t & 63];
	t = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > t)
			t = argv[1][i];
	}
	srand(t ^ 14);
	pass[3] = code[rand() & 63];
	t = 0;
	for (i = 0; i < len; i++)
		t += (argv[1][i] * argv[1][i]);
	t ^= 239;
	pass[4] = code[t & 63];
	for (i = 0; i < argv[1][0]; i++)
		t = rand();
	t ^= 229;
	pass[5] = code[t & 63];
	pass[6] = '\0';
	printf("%s", pass);
	return (0);
}
