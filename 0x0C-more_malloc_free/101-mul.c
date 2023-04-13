#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int lenth(char *str);
char *carray(int size);
char *iterate_zeroes(char *str);
int digi(char a);
void prods(char *prod, char *mult, int digit, int zeroes);
void sums(char *final_prod, char *next_prod, int next_len);

/**
 * lenth - finds the length of a string
 *
 * @str: string input
 *
 * Return: length of the str
 */
int lenth(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}

/**
 * carray - creates an array of chars and initializes it with
 * the x-ter 'x' and adds a terminating null byte
 *
 * @size: size of the array
 *
 * Return: pointer to the array
 * If there is insufficient space, the
 * function exits with a status of 98
 */

char *carray(int size)
{
	char *a;
	int i;

	a = malloc(sizeof(char) * size);

	if (a == NULL)
	{
		exit(98);
	}
	for (i = 0; i < (size - 1); i++)
	{
		a[i] = 'x';
	}
	a[index] = '\0';

	return (a);
}

/**
 * iterate_zeroes - iterates through a string of numbers containing
 * leading zeroes until it hits a non-zero number
 *
 * @str: string of numbers to be iterate through
 *
 * Return: pointer to the next non-zero element
 */

char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
	{
		str++;
	}
	return (str);
}

/**
 * digi - converts a digit character to a corresponding int
 *
 * @a: character to be converted.
 *
 * Return: The converted int
 * if c is a non-digit, the function,
 * exits with a status of 98
 */

int digi(char a)
{
	int digit = a - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * prods - multiplies a string of numbers by a single digit
 *
 * @prod: buffer to store the result
 * @mult: string of numbers
 * @digit: single digit
 * @zeroes: necessary no. of leading zeroes
 *
 * Return: if mult contains a non-digit, function
 * exits with a status value of 98
 */

void prods(char *prod, char *mult, int digit, int zeroes)
{
	int len, n, mults = 0;

	len = lenth(mult) - 1;
	mult += len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; len >= 0; len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		n = (*mult - '0') * digit;
		n += mults;
		*prod = (n % 10) + '0';
		mults = n / 10;
	}

	if (mults)
		*prod = (mults % 10) + '0';
}

/**
 * sums - adds no.s stored in two strings
 *
 * @final_prod: buffer storing the running final product
 * @next_prod: next product to be added
 * @next_len: length of next_prod
 *
 * Return: Nothing
 */

void sums(char *final_prod, char *next_prod, int next_len)
{
	int n, divs = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		n = (*final_prod - '0') + (*next_prod - '0');
		n += divs;
		*final_prod = (n % 10) + '0';
		divs = n / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		n = (*next_prod - '0');
		n += divs;
		*final_prod = (n % 10) + '0';
		divs = n / 10;

		final_prod--;
		next_prod--;
	}

	if (divs)
		*final_prod = (divs % 10) + '0';
}

/**
 * main - multiplies two positive numbers
 *
 * @argv: pointer to the array of arguments
 * @argc: no. of arguments entered in array
 *
 * Return: always 0 for success
 * if the no. of arguments is incorrect or one number
 * contains non-digits, the function exits with a status of 98
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int s, i, my_digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	s = lenth(argv[1]) + lenth(argv[2]);
	final_prod = carray(s + 1);
	next_prod = carray(s + 1);

	for (i = lenth(argv[2]) - 1; i >= 0; i--)
	{
		my_digit = digi(*(argv[2] + i));
		prods(next_prod, argv[1], my_digit, zeroes++);
		sums(final_prod, next_prod, s - 1);
	}
	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			putchar(final_prod[i]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
