#include "main.h"
/**
 * print_to_98 - prints all integers from input to 98
 * 	separated by comma and followed a space
 * @n: number to be inputted
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
