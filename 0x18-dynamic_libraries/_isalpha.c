#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 *
 * @c: the character to check
 *
 * Return: 1 if alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	return (_islower(c) || _isupper(c));
}
