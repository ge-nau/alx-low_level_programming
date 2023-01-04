#include "main.h"

/**
 * swap_int - swaps the value of one var to another
 * @a: fnum
 * @b: snum
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
