#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: the pointer to change
 * @to: the value to point to the pointer of pointer
 *
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
