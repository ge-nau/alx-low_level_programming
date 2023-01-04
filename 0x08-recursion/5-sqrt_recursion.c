#include "main.h"

/**
 * helper - finds the square root of 2 numbers
 * @a: num
 * @b: the num to test
 * Return: square root
 */

int helper(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (helper(a, b + 1));


	return (1);
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: the number
 * Return: the sqr root of @n
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
