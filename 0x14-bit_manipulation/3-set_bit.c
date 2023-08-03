#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: pointer to bit to be converted to 1
 * @index: index of bit
 *
 * Return: if it worked 1
 * if error occured -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
