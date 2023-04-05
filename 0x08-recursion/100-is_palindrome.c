#include "main.h"

/**
 * string_l - finds the lngth of a string
 *
 * @s: string input
 *
 * Return: length of string
 */

int string_l(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += string_l(s + len);
	}
	return (len);
}

/**
 * palcheck - checks for palidrom in a string
 *
 * @s: string input
 * @l: length of s
 * @i: index of string input
 *
 * Return: if string is a palidrom return 1
 * if not return 0
 */

int palcheck(char *s, int l, int i)
{
	if (s[i] == s[l / 2])
		return (1);

	if (s[i] == s[l - i - 1])
		return (palcheck(s, l, i + 1));

	return (0);
}

/**
 * is_palindrome - checks if a string is a palidrom
 *
 * @s: the string to check
 *
 * Return: 1 if s is a palidrom
 * 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = string_l(s);

	if (!(*s))
		return (1);

	return (palcheck(s, len, i));
}
