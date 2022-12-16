#include <stdio.h>

/**
 * main -  praints all single numbersin base 10 
 * 	using only putchar twice
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
