#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of to no.s
 *
 * @a: first input
 * @b: second input
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns diff between two no.s
 *
 * @a: first input
 * @b: second input
 *
 * Return: diff. of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of two no.s
 *
 * @a: first input
 * @b: second input
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns div. of two no.s
 *
 * @a: first input
 * @b: second input
 *
 * Return: div. between a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return remainder of a division btwn two no.s
 *
 * @a: first input
 * @b: second input
 *
 * Return: remainder of a / b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
