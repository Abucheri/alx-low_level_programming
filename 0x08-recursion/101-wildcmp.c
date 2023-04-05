#include "main.h"

/**
 * stringl_no_wilds - returns the leghth of a string
 * ignores wildcard x-ters
 *
 * @s: the string input
 *
 * Return: length of s
 */

int stringl_no_wilds(char *s)
{
	int len = 0, i = 0;

	if (*(s + i))
	{
		if (*s != '*')
		{
			len++;
		}
		i++;
		len += stringl_no_wilds(s + i);
	}

	return (len);
}

/**
 * iter_wild - iterates through a string at a wildcard
 * until it finds a non-wildcard
 *
 * @w: string to be iterated
 *
 * Return: Nothing
 */

void iter_wild(char **w)
{
	if (**w == '*')
	{
		(*w)++;
		iter_wild(w);
	}
}

/**
 * p_match - checks if string matches postfix
 * of another string containning wildcars
 *
 * @s: string to be matched
 * @p: postfix string
 *
 * Return: if postfix of s is same, a pointer to
 * NULL byte is located at the end of the postfix
 * if not, a pointer to the first unmatched character in postfix
 * is returned
 */

char *p_match(char *s, char *p)
{
	int stringl = stringl_no_wilds(s) - 1;
	int p_len = stringl_no_wilds(p) - 1;

	if (*p == '*')
	{
		iter_wild(&p);
	}

	if (*(s + stringl - p_len) == *p && *p != '\0')
	{
		p++;
		return (p_match(s, p));
	}

	return (p);
}

/**
 * wildcmp - compares two strings and returns 1
 *  if the strings can be considered identical, otherwise return 0
 *
 *  @s1: first string input
 *  @s2: second string input
 *
 *  Return: 1 if the strings can be considered identical
 *  otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iter_wild(&s2);
		s2 = p_match(s1, s2);
	}

	if (*s2 == '\0')
	{
		return (1);
	}

	if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcmp(++s1, ++s2));
}
