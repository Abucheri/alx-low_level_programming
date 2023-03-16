#include <stdio.h>

/**
 *
 * main - Prints the size of various types 
 * 	on the computer it is compiled and run on.
 *
 *Return: Always 0 for success
 */
int main(void)
{
	printf("The size of a char: %zu byte(s)\n", sizeof(char));
	printf("The size of an int: %zu byte(s)\n", sizeof(int));
	printf("The size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("The size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("The size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
