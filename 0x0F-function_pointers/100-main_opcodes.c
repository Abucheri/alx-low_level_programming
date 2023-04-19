#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints it's own opocodes
 *
 * @argc: no. of arguments given
 * @argv: pointer to array of strings
 *
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *r;
	
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	
	r = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", r[i]);
			break;
		}
		printf("%02hhx ", r[i]);
	}
	return (0);
}
