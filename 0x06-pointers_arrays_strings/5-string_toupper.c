#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @a: string to be changed
 *
 * Return: uppercased characters
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;

		i++;
	}

	return (a);
}
