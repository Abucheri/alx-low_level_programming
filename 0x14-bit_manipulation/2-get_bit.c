#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: bit to be evaluated
 * @index: index of bit value
 *
 * Return: value of bit at index
 * if error occurs, -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
