#include "main.h"

/**
 * print_diagonal -prints lines diagonally
 * @n: input variables
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int a, j;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; a++)
	{
		for (j = 0; j < a; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
